/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 10:35:17 by amaquena          #+#    #+#             */
/*   Updated: 2019/09/09 16:36:36 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort2(t_stack **a, t_stack **b)
{
	check_sorted(a, b);
	if ((*a)->elem > (*a)->next->elem)
		swap_ab(a, b, 1, 2);
}

void sort3(t_stack **a, t_stack **b)
{
	int p1 = (*a)->elem;
	int p2 = (*a)->next->elem;
	int p3 = (*a)->next->next->elem;

	check_sorted(a, b);
	if (p1 < p2 && p1 < p3 && p2 > p3)
	{
		reverse_ab(a, b, 1, 2);
		swap_ab(a, b, 1, 2);
	}
	else if (p1 > p2 && p1 < p3 && p2 < p3)
		swap_ab(a, b, 1, 2);
	else if (p1 < p2 && p1 > p3 && p2 > p3)
		reverse_ab(a, b, 1, 2);
	else if (p1 > p2 && p1 > p3 && p2 < p3)
		rotate_ab(a, b, 1, 2);
	else if (p1 > p2 && p1 > p3 && p2 > p3)
	{
		rotate_ab(a, b, 1, 2);
		swap_ab(a, b, 1, 2);
	}
}

void sort4(t_stack **a, t_stack **b)
{
	check_sorted(a, b);
	while (1)
	{
		if ((*a)->index == 0)
		{
			push_ab(a, b, 2, 2);
			break;
		}
		else
			rotate_ab(a, b, 1, 2);
	}
	sort3(a, b);
	push_ab(a, b, 1, 2);
}

void sort5(t_stack **a, t_stack **b)
{
	int count;

	check_sorted(a, b);
	count = 0;
	while (1)
	{
		if ((*a)->index < 2)
			push_ab(a, b, 2, 2);
		else
			rotate_ab(a, b, 1, 2);
		if (count == 5)
			break;
		count++;
	}
	sort3(a, b);
	if ((*b)->elem < (*b)->next->elem)
		swap_ab(a, b, 2, 2);
	while (count > 3)
	{
		push_ab(a, b, 1, 2);
		count--;
	}
}

void sort99(t_stack **a, t_stack **b, int stack_size)
{
	int i;
	int pos;

	check_sorted(a, b);
	i = 0;
	pos = 0;
	while (*a)
	{
		pos = find_smallest_pos(*a, i);
		ra_or_rra(a, b, pos, stack_size, i);
		push_ab(a, b, 2, 2);
		i++;
	}
	while (*b)
		push_ab(a, b, 1, 2);
}