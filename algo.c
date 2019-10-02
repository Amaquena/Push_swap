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

void	sort2(t_stack **a, t_stack **b)
{
	is_sorted((*a), (*b));
		if ((*a)->elem > (*a)->next->elem)
			swap(a);
		disp_stack((*a), (*b));
}

void	sort3(t_stack **a)
{
	int p1 = (*a)->elem;
	int p2 = (*a)->next->elem;
	int p3 = (*a)->next->next->elem;
	
	if (p1 > p2 && p1 > p3 && p3 < p2)
	{
		swap(a);
		reverse(a);
	}
	else if (p1 < p2 && p2 > p3 && p3 > p1)
	{
		swap(a);
		rotate(a);
	}
	else if (p1 > p2 && p1 < p3 && p3 > p2)
		swap(a);
	else if (p1 > p3 && p3 > p2 && p1 > p2)
		rotate(a);
	else if (p3 < p1 && p3 < p2 && p1 < 2)
		reverse(a);
}
/*
	while (!(is_sorted((*a), (*b))))
	{
		if ((*a)->elem < (*a)->next->elem)
			reverse(a);
		else
			swap(a);
		disp_stack((*a), (*b));
	}
	
}
*/

void	sort4(t_stack **a, t_stack **b)
{
	int size;
	int pos;

	size = stack_size((*a));
	pos = find_smallest((*a));
	if (pos > size / 2)
	{
		while ((*a)->index != pos)
			reverse(a);
		push_b(a, b);
		pos--;
	}
	disp_stack((*a), (*b));
	sort3(a);
	push_a(a, b);
}