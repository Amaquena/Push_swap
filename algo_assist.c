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

int find_largest(t_stack *a)
{
	int pos;
	int largest;

	pos = 1;
	largest = stack_size(a);
	while (a)
	{
		if (a->index == largest)
			break ;
		pos++;
		a = a->next;
	}
	return (pos);
}

int find_smallest(t_stack *a)
{
	int pos;
	int smallest;

	pos = 1;
	smallest = 1;
	while (a)
	{
		if (a->index == smallest)
			break ;
		pos++;
		a = a->next;
	}
	return (pos);
}