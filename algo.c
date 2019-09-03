/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 10:35:17 by amaquena          #+#    #+#             */
/*   Updated: 2019/09/03 12:55:39 by amaquena         ###   ########.fr       */
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

void	sort3(t_stack **a, t_stack **b)
{
	while (!(is_sorted((*a), (*b))))
	{
		if ((*a)->elem < (*a)->next->elem)
			reverse(a);
		else
		{
			swap(a);
		}
		disp_stack((*a), (*b));
	}
}
