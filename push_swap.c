/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 10:12:22 by amaquena          #+#    #+#             */
/*   Updated: 2019/08/30 15:02:08 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_args(int moves, int total, t_stack **a, t_stack **b)
{
	if (total == 2)
		sort2(++moves, a, b);
}

int		main(int ac, char **av)
{
	t_stack *stack_a;
	t_stack *stack_b;
	int total;
	static int moves;

	if (ac > 1)
	{
		ac--;
		moves = 0;
		total = ac;
		stack_b = NULL;
		while (ac > 0)
			push(&stack_a, av[ac--]);
		disp_stack(moves, stack_a, stack_b);
		check_args(moves, total, &stack_a, &stack_b);
		is_sorted(stack_a, stack_b);
	}
	return (0);
}
