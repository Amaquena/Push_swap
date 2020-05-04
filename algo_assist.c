/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_assist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 13:46:37 by amaquena          #+#    #+#             */
/*   Updated: 2019/10/02 13:46:39 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra_or_rra(t_stack **a, t_stack **b, int pos, int size, int range_value)
{
	if (pos > size / 2)
	{
		pos = (size - (range_value - 1)) - pos;
		while (pos != 0)
		{
			reverse_ab(a, b, 1, 2);
			pos--;
		}
	}
	else if (pos <= size / 2)
	{
		while (pos > 1)
		{
			rotate_ab(a, b, 1, 2);
			pos--;
		}
	}
}

void	rb_or_rrb(t_stack **a, t_stack **b, int pos, int size)
{
	if (pos > size / 2)
	{
		pos = size - pos;
		while (pos != 0)
		{
			reverse_ab(a, b, 2, 2);
			pos--;
		}
	}
	else if (pos <= size / 2)
	{
		while (pos != 0)
		{
			rotate_ab(a, b, 2, 2);
			pos--;
		}
	}
}

int     find_largest_pos(t_stack *stack, int stack_size)
{
    int pos;

    pos = 0;
    while (stack)
    {
        pos++;
        if (stack->index == (stack_size - 1))
            break ;
        stack = stack->next;
    }
    return (pos);
}

int find_smallest_pos(t_stack *stack, int smallest)
{
	int pos;

	pos = 0;
	while (stack)
	{
		pos++;
		if (stack->index == smallest)
			break;
		stack = stack->next;
	}
	// printf("positions: %d\n", pos);
	return (pos);
}

void	pushback_b(t_stack **stack_a, t_stack **stack_b, int i, int range_max)
{
	int		pos;

	while (*stack_b)
	{
		while (i > 0 && i >= range_max - 5)
		{
			pos = find_largest_pos((*stack_b), i);
			rb_or_rrb(stack_a, stack_b, pos, range_max);
			push_ab(stack_a, stack_b, 1, 2);
			i--;
		}
		range_max -= 5;
	}
}