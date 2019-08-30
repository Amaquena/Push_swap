/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 10:35:17 by amaquena          #+#    #+#             */
/*   Updated: 2019/08/30 14:59:49 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort2(int moves, t_stack **a, t_stack **b)
{
	is_sorted((*a), (*b));
		if ((*a)->elem > (*a)->next->elem)
			swap(a);
		disp_stack(moves, (*a), (*b));
}
/*
void	sort3(t_stack **a, t_stack **b)
{
	while (!(is_sorted(a, b)))
	{
		if (a->elem > a->next->elem)
			swap(a);
		else
		{
			swap(a);
			reverse(a);
		}
	}
}
*/
