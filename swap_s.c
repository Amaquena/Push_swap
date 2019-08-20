/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 15:30:55 by amaquena          #+#    #+#             */
/*   Updated: 2019/08/19 14:27:50 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_sa(int *stack_a)
{
	int		temp;

	temp = stack_a[0];
	stack_a[0] = stack_a[1];
	stack_a[0] = temp;
}

void	swap_sb(int *stack_b)
{
	int		temp;

	temp = stack_b[0];
	stack_b[1] = stack_b[0];
	stack_b[0] = temp;
}

void	swap_ss(int *stack_a, int *stack_b)
{
	swap_sa(stack_a);
	swap_sb(stack_b);
}
