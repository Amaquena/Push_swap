/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 14:53:11 by amaquena          #+#    #+#             */
/*   Updated: 2019/09/13 12:50:39 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			is_sorted(t_stack *a, t_stack *b)
{
	if (!b)
	{
		while (a->next)
		{
			if (a->elem < a->next->elem)
				a = a->next;
			else
				break ;
		}
		if (!(a->next))
		{
			ft_putstr("\x1b[32mOK!\n\x1b[0m");
			exit(0);
		}
	}
	return (0);
}

void		dup_checker(t_stack *stack, int value)
{
	int counter;

	counter = 0;
	while (stack)
	{
		if ((stack->elem == value) && (counter < 3))
			counter++;
		if (counter == 2)
			error_msg();
		stack = stack->next;
	}
}

void		digit_checker(const char *argv)
{
	int i;

	i = 0;
	while (argv[i])
	{
		if (!(ft_isdigit(argv[i])) && (argv[i] != '-' && argv[i] != '+'))
			error_msg();
		i++;
	}
//	ft_putstr("argv: ");
//	ft_putnbr(ft_atoi(argv));
	if (ft_atoi(argv) >= 2147483647 || ft_atoi(argv) <= -2147483648)
		error_msg();
}

void	error_msg(void)
{
		ft_putstr("\x1b[31mERROR!\n\x1b[0m");
		exit(1);
}
