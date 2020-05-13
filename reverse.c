/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 10:15:21 by amaquena          #+#    #+#             */
/*   Updated: 2019/09/19 14:54:54 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse(t_stack **stack)
{
	t_stack *temp;
	t_stack *curr;

	if ((*stack) && (*stack)->next)
	{
		curr = (*stack);
		while (curr->next->next)
			curr = curr->next;
		temp = curr->next;
		curr->next = NULL;
		temp->next = (*stack);
		(*stack) = temp;
	}
}

static void	displayAction(int action, int picker)
{
	if (action == 1 && picker == 2)
		ft_putendl("rra");
	else if (action == 2 && picker == 2)
		ft_putendl("rrb");
	else if (action == 3 && picker == 2)
		ft_putendl("rrr");
}

void	reverse_ab(t_stack **a, t_stack **b, int action, int picker)
{
	if (action == 1)
	{
		reverse(a);
		displayAction(1, picker);
	}
	else if (action == 2)
	{
		reverse(b);
		displayAction(2, picker);
	}
	if (action == 3)
	{
		reverse(a);
		reverse(b);
		displayAction(3, picker);
	}
}
