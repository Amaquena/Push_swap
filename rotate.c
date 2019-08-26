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

void	rotate(t_stack **stack)
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
}

void	rotate_ab(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}
