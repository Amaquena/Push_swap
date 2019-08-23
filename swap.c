/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 15:30:55 by amaquena          #+#    #+#             */
/*   Updated: 2019/08/23 10:07:06 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	int temp;

	temp = (*stack)->elem;
	(*stack)->elem = (*stack)->next->elem;
	(*stack)->next->elem = temp;
}

void	swap_ab(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
}
