/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 14:27:06 by amaquena          #+#    #+#             */
/*   Updated: 2019/09/20 13:36:23 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void rev_rot(char *line, t_stack **a, t_stack **b)
{
	if (ft_strncmp(line, "rra", 3) == 0)
		reverse_ab(a, b, 1, 1);
	else if (ft_strncmp(line, "rrb", 3) == 0)
		reverse_ab(a, b, 2, 1);
	else if (ft_strncmp(line, "rrr", 3) == 0)
		reverse_ab(a, b, 3, 1);
	else
		print_msg(3);
}

static void actions(char *line, t_stack **a, t_stack **b)
{
	if (ft_strncmp(line, "sa", 2) == 0)
		swap_ab(a, b, 1, 1);
	else if (ft_strncmp(line, "sb", 2) == 0)
		swap_ab(a, b, 1, 1);
	else if (ft_strncmp(line, "ss", 2) == 0)
		swap_ab(a, b, 1, 1);
	else if (ft_strncmp(line, "pa", 2) == 0)
		push_ab(a, b, 1, 1);
	else if (ft_strncmp(line, "pb", 2) == 0)
		push_ab(a, b, 2, 1);
	else if (ft_strncmp(line, "ra", 2) == 0)
		rotate_ab(a, b, 1, 1);
	else if (ft_strncmp(line, "rb", 2) == 0)
		rotate_ab(a, b, 2, 1);
	else if (ft_strncmp(line, "rr", 2) == 0)
		rotate_ab(a, b, 3, 1);
	else
		print_msg(3);
}

static void handleInstructions(char **line, t_stack **a, t_stack **b)
{
	while (get_next_line(0, line))
	{
		if (ft_strlen((*line)) == 2)
			actions((*line), a, b);
		else if (ft_strlen((*line)) == 3)
			rev_rot((*line), a, b);
		else
			print_msg(3);
	}
}

int main(int ac, char **av)
{
	t_stack *stack_a;
	t_stack *stack_b;
	char *line;

	if (ac > 1)
	{
		ac--;
		stack_b = NULL;
		stack_a = NULL;
		while (ac > 0)
			push(&stack_a, av[ac--]);
		// normalizer(&stack_a);
		handleInstructions(&line, &stack_a, &stack_b);
	}
	else if (ac == 1)
		return (0);
	is_sorted(&stack_a, &stack_b, 1);
	return (0);
}
