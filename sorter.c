/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 14:53:11 by amaquena          #+#    #+#             */
/*   Updated: 2019/08/26 17:56:31 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_sorted(t_stack *a, t_stack *b)
{
	if (!b)
	{
		while (a->next)
			if (a->elem < a->next->elem)
				a = a->next;
		if (!(a->next))
		{
			write(1, "OK!\n", 4);
			return (1);
		}
	}
	return (0);
}

void	dup_checker(t_stack *stack, int value)
{
	int counter;

	counter = 0;
	while (stack)
	{
		if ((stack->elem == value) && (counter < 3))
			counter++;
		if (counter == 2)
		{
			ft_putstr("\x1b[31mERROR!\n\x1b[0m");
			exit(1);
		}
		stack = stack->next;
	}
}

void	digit_checker(const char *argv)
{
	int i;

	i = 0;
	while (argv[i])
	{
		if (!(ft_isdigit(argv[i])))
		{
			ft_putstr("\x1b[31mERROR!\n\x1b[0m");
			exit(1);
		}
		i++;
	}
}
