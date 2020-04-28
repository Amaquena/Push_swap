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

void ra_or_rra(t_stack **a, t_stack **b, int pos, int size)
{
	if (pos >= size / 2)
	{
		pos = size - pos;
		while (pos != 0)
		{
			reverse_ab(a, b, 1, 2);
			pos--;
		}
	}
	else if (pos < size / 2)
	{
		while (pos != 0)
		{
			rotate_ab(a, b, 1, 2);
			pos--;
		}
	}
}

int find_largest(t_stack *a)
{
	int pos;
	int largest;

	pos = 1;
	largest = stack_size(a);
	while (a)
	{
		if (a->index == largest)
			break;
		pos++;
		a = a->next;
	}
	return (pos);
}

int find_smallest(t_stack *a, int smallest)
{
	int pos;

	pos = 0;
	while (a)
	{
		if (a->index == smallest)
			break;
		pos++;
		a = a->next;
	}
	return (pos);
}