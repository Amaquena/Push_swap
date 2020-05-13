/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 10:12:22 by amaquena          #+#    #+#             */
/*   Updated: 2019/09/04 16:18:01 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_the_stack(t_stack **a, t_stack **b)
{
	int total;

	total = stack_size((*a));
	if (total == 2)
		sort2(a, b);
	else if (total == 3)
		sort3(a, b);
	else if (total == 4)
		sort4(a, b);
	else if (total == 5)
		sort5(a, b);
	else if (total > 5 && total < 100)
		sort99(a, b, total);
	else if (total >= 100 && total < 500)
		sort100(a, b);
	else if (total >= 500)
		sort500(a, b);
	
}

int		main(int ac, char **av)
{
	t_stack *stack_a;
	t_stack *stack_b;

	if (ac > 1)
	{
		ac--;
		stack_b = NULL;
		stack_a = NULL;
		while (ac > 0)
			push(&stack_a, av[ac--]);
		normalizer(&stack_a);
		check_sorted(&stack_a, &stack_b);
		sort_the_stack(&stack_a, &stack_b);
		is_sorted(&stack_a, &stack_b, 2);
	}
	return (0);
}