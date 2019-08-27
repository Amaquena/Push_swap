/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 14:27:06 by amaquena          #+#    #+#             */
/*   Updated: 2019/08/27 16:01:09 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		rev_rot(char *line, t_stack **a, t_stack **b)
{
	if (ft_strncmp(line, "rra", 3) == 0)
		reverse(a);
	else if (ft_strncmp(line, "rrb", 3) == 0)
		reverse(b);
	else if (ft_strncmp(line, "rrr", 3) == 0)
		reverse_ab(a, b);
	else
		error_msg();
	disp_stack((*a), (*b));
	is_sorted((*a), (*b));
}

static void		actions(char *line, t_stack **a, t_stack **b)
{
	if (ft_strncmp(line, "sa", 2) == 0)
		swap(a);
	else if (ft_strncmp(line, "sb", 2) == 0)
		swap(b);
	else if (ft_strncmp(line, "ss", 2) == 0)
		swap_ab(a, b);
	else if (ft_strncmp(line, "pa", 2) == 0)
		push_a(a, b);
	else if (ft_strncmp(line, "pb", 2) == 0)
		push_b(a, b);
	else if (ft_strncmp(line, "ra", 2) == 0)
		rotate(a);
	else if (ft_strncmp(line, "rb", 2) == 0)
		rotate(b);
	else if (ft_strncmp(line, "rr", 2) == 0)
		rotate_ab(a, b);
	else
		error_msg();
	disp_stack((*a), (*b));
	is_sorted((*a), (*b));
}

int 		main(int ac, char **av)
{
	t_stack *stack_a;
	t_stack *stack_b;
	char *line;

	if (ac > 1)
	{
		ac--;
		stack_b = NULL;
		while (ac > 0)
			push(&stack_a, av[ac--]);
		disp_stack(stack_a, stack_b);
		is_sorted(stack_a, stack_b);
		while (get_next_line(0, &line))
			if (ft_strlen(line) == 2)
				actions(line, &stack_a, &stack_b);
			else if (ft_strlen(line) == 3)
				rev_rot(line, &stack_a, &stack_b);
			else
				error_msg();
	}
	else if (ac == 1)
		return (0);
	ft_putstr("\x1b[31mKO\n\x1b[0m");
	return (0);
}
