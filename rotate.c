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

static void	rotate(t_stack **stack)
{
	t_stack *temp;
	t_stack *curr;

	if ((*stack) && (*stack)->next)
	{
		curr = (*stack);
		temp = (*stack);
		while (curr->next)
			curr = curr->next;
		(*stack) = (*stack)->next;
		curr->next = temp;
		temp->next = NULL;
	}
	// is_sorted(a, b);
}

static void	displayAction(int action, int picker)
{
	if (action == 1 && picker == 2)
		ft_putendl("ra");
	else if (action == 2 && picker == 2)
		ft_putendl("rb");
	else if (action == 3 && picker == 2)
		ft_putendl("rr");
}

void	rotate_ab(t_stack **a, t_stack **b, int action, int picker)
{
	if (action == 1)
	{
		rotate(a);
		displayAction(1, picker);
	}
	else if (action == 2)
	{
		rotate(b);
		displayAction(2, picker);
	}
	else if (action == 3)
	{
		rotate(a);
		rotate(b);
		displayAction(3, picker);
	}
	// disp_stack((*a), (*b));
}
