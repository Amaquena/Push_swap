/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 15:30:55 by amaquena          #+#    #+#             */
/*   Updated: 2019/08/22 16:57:05 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_sa(t_stack **stack_a)
{
	int temp;

	temp = (*stack_a)->elem;
	(*stack_a)->elem = (*stack_a)->next->elem;
	(*stack_a)->next->elem = temp;
}

void	swap_sb(t_stack **stack_b)
{
	int		temp;

	temp = (*stack_b)->elem;
	(*stack_b)->elem = (*stack_b)->next->elem;
	(*stack_b)->next->elem = temp;
}

void	swap_ss(t_stack **stack_a, t_stack **stack_b)
{
	swap_sa(stack_a);
	swap_sb(stack_b);
}
