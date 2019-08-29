/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 10:12:22 by amaquena          #+#    #+#             */
/*   Updated: 2019/08/29 10:22:31 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
	t_stack *stack_a;
	t_stack *stack_b;

	if (ac > 1)
	{
		ac--;
		stack_b = NULL;
		while (ac > 0)
			push(&stack_a, av[ac--]);
		disp_stack(stack_a, stack_b);
		is_sorted(stack_a, stack_b);
	}
	return (0);
}
