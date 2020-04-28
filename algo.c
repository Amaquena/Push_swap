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
		if ((*a)->elem > (*a)->next->elem)
			swap_ab(a, b, 1, 2);
}

void	sort3(t_stack **a, t_stack **b)
{
	int p1 = (*a)->elem;
	int p2 = (*a)->next->elem;
	int p3 = (*a)->next->next->elem;
	
	if (p1 > p2 && p1 > p3 && p3 < p2)
	{
		swap_ab(a, b, 1, 2);
		reverse_ab(a, b, 1, 2);
	}
	else if (p1 < p2 && p2 > p3 && p3 > p1)
	{
		swap_ab(a, b, 1, 2);
		rotate_ab(a, b, 1, 2);
	}
	else if (p1 > p2 && p1 < p3 && p3 > p2)
		swap_ab(a, b, 1, 2);
	else if (p1 > p3 && p3 > p2 && p1 > p2)
		rotate_ab(a, b, 1, 2);
	else if (p3 < p1 && p3 < p2 && p1 < 2)
		reverse_ab(a, b, 1, 2);
}

void	sort4(t_stack **a, t_stack **b)
{
	int size;
	int pos;
	int i;

	size = stack_size((*a));
	i = 0;
	while (i < size - 3)
	{
		pos = find_smallest((*a), (i + 1));
		ra_or_rra(a, b, pos, size);
		push_ab(a, b, 2, 2);
		i++;
	}
	sort3(a, b);
	while (i > 0)
	{
		push_ab(a, b, 1, 2);
		i--;
	}
}