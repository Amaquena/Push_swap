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

void	swap(t_stack **stack)
{
	t_stack *temp;

	if ((*stack) && (*stack)->next)
	{
		temp = (*stack);
		(*stack) = (*stack)->next;
		temp->next = (*stack)->next;
		(*stack)->next = temp;
	}
//		ft_swapany(&(*stack)->elem, &(*stack)->next->elem, sizeof(int));
}

void	swap_ab(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
}
