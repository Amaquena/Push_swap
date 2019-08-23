/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 10:15:21 by amaquena          #+#    #+#             */
/*   Updated: 2019/08/23 12:17:47 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse(t_stack **stack)
{
	t_stack *temp;
	t_stack *curr;

	curr = (*stack);
	while (curr->next->next)
		curr = curr->next;
	temp = curr->next;
	curr->next = NULL;
	temp->next = (*stack);
	(*stack) = temp;
}

void	reverse_ab(t_stack **stack_a, t_stack **stack_b)
{
	reverse(stack_a);
	reverse(stack_b);
}
