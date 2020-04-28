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

static void	swap(t_stack **stack)
{
	t_stack *temp;

	if ((*stack) && (*stack)->next)
	{
		temp = (*stack);
		(*stack) = (*stack)->next;
		temp->next = (*stack)->next;
		(*stack)->next = temp;
	}
	// is_sorted((*a), (*b));
}

static void	displayAction(int action)
{
	if (action == 1)
		ft_putendl("sa");
	else if (action == 2)
		ft_putendl("sb");
	else if (action == 3)
		ft_putendl("ss");
}

void	swap_ab(t_stack **a, t_stack **b, int action, int picker)
{
	if (action == 1)
	{
		swap(a);
		if (picker == 2)
			displayAction(1);
	}
	else if (action == 2)
	{
		swap(b);
		if (picker == 2)
			displayAction(2);
	}
	else if (action == 3)
	{
		swap(a);
		swap(b);
		if (picker == 2)
			displayAction(3);
	}
	disp_stack((*a), (*b));
}