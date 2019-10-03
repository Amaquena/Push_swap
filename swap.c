/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 15:30:55 by amaquena          #+#    #+#             */
/*   Updated: 2019/09/20 16:20:35 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **a, t_stack **b, int action)
{
	t_stack *temp;

	if ((*a) && (*a)->next)
	{
		temp = (*a);
		(*a) = (*a)->next;
		temp->next = (*a)->next;
		(*a)->next = temp;
	}
	if (action == 1)
		ft_putendl("sa");
	else if (action == 2)
		ft_putendl("sb");
	is_sorted((*a), (*b));
}

void	swap_ab(t_stack **a, t_stack **b, int action)
{
	if (action == 3)
	{
		swap(a, b, 3);
		swap(a, b, 3);
	}
	else if (action == 1 || action == 2)
	{
		swap(a, b, 1);
		swap(a, b, 2);
	}
}
