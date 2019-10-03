/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_r.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 15:29:19 by amaquena          #+#    #+#             */
/*   Updated: 2019/08/26 13:55:30 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **a, t_stack **b, int action)
{
	t_stack *temp;
	t_stack *curr;

	if ((*a) && (*a)->next)
	{
		curr = (*a);
		temp = (*a);
		while (curr->next)
			curr = curr->next;
		(*a) = (*a)->next;
		curr->next = temp;
		temp->next = NULL;
	}
	if (action == 1)
		ft_putendl("ra");
	else if (action == 2)
		ft_putendl("rb");
	is_sorted((*a), (*b));
}

void	rotate_ab(t_stack **a, t_stack **b, int action)
{
	if (action == 3)
	{
		rotate(a, b, 3);
		rotate(a, b,3);
	}
	else if (action == 1 || action == 2)
	{
			rotate(a, b, 1);
			rotate(a, b, 2);
	}
}
