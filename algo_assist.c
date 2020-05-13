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
		pos = ((size + 1) - pos);
		while (pos != 0)
		{
			reverse_ab(a, b, 2, 2);
			pos--;
		}
	}
	else if (pos <= size / 2)
	{
		while (pos > 1)
		{
			rotate_ab(a, b, 2, 2);
			pos--;
		}
	}
}

void	pushback_b(t_stack **a, t_stack **b, int size)
{
	int		pos;

	while (*b)
	{
		while (size > 0)
		{
			pos = find_nth_pos((*b), size -1);
			rb_or_rrb(a, b, pos, size);
			push_ab(a, b, 1, 2);
			size--;
		}
	}
}

void	pushback_b_2(t_stack **a, t_stack **b)
{
	int highestValue;
	int secondHighestValue;
	int highestPos;
	int secondHighestPos;

	while (*b)
	{
		highestValue = find_largest_val(*b);
		secondHighestValue = find_second_largest(*b, highestValue);
		highestPos = find_nth_pos(*b, highestValue);
		secondHighestPos = find_nth_pos(*b, secondHighestValue);

		if (*b && (count_moves(*b, highestPos) < count_moves(*b, secondHighestPos)))
		{
			rb_or_rrb(a, b, highestPos, stack_size(*b));
			push_ab(a, b, 1, 2);
		}
		else
		{
			if (stack_size(*b) > 2)
			{
				rb_or_rrb(a, b, secondHighestPos, stack_size(*b));
				push_ab(a, b, 1, 2);
				highestPos = find_nth_pos(*b, highestValue);
				rb_or_rrb(a, b, highestPos, stack_size(*b));
				push_ab(a, b, 1, 2);
				swap_ab(a, b, 1, 2);
			}
			else if ((*b)->index != highestValue)
				swap_ab(a, b, 2, 2);
			else
				push_ab(a, b, 1, 2);
		}
	}
}