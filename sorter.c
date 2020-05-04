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

void check_sorted(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *a;
	t_stack *b;

	a = (*stack_a);
	b = (*stack_b);
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
			pop(stack_a);
			exit(1);
		}
	}
}

void			is_sorted(t_stack **stack_a, t_stack **stack_b, int picker)
{
	t_stack *a;
	t_stack *b;

	a = (*stack_a);
	b = (*stack_b);
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
			pop(stack_a);
			if (picker == 1) // change back to 1
				print_msg(1);
			exit(1);
		}
	}
	// disp_stack(a, b);
	pop(stack_a);
	pop(stack_b);
	if (picker == 1) // change back to 1
		print_msg(2);
	exit(1);
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
			print_msg(3);
		stack = stack->next;
	}
}

int			digit_checker(const char *argv)
{
	int i;
	long value;

	i = 0;
	while (argv[i])
	{
		if (!(ft_isdigit(argv[i])) && (argv[0] != '-' && argv[0] != '+'))
			print_msg(3);
		i++;
	}
	value = ft_atol(argv);
	if (value >= INT_MAX || value <= INT_MIN)
		print_msg(3);
	return ((int)value);
}

void	print_msg(int msg)
{
	if (msg == 1)
		ft_putstr("\x1b[32mOK!\n\x1b[0m");
	else if (msg == 2)
		ft_putstr("\x1b[33mKO!\n\x1b[0m");
	else if (msg == 3)
		ft_putstr("\x1b[31mERROR!\n\x1b[0m");
	exit(1);
}
