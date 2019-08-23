/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 16:42:51 by amaquena          #+#    #+#             */
/*   Updated: 2019/08/23 15:52:40 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **curr, const int elem)
{
	t_stack *new;
	
	if (!(new = (t_stack *)malloc(sizeof(t_stack))))
		return ;
	new->elem = elem;
	new->next = (*curr);
	(*curr) = new;
}

void	pop(t_stack **curr)
{
	t_stack *pop;

	pop = (*curr);
	(*curr) = (*curr)->next;
	free(pop);
}

void	disp_stack(t_stack *stack)
{
	t_stack *temp;

	if (stack)
	{
		temp = stack;
		while (temp)
		{
			ft_putnbr(temp->elem);
			temp = temp->next;
		}
	}
	ft_putchar('\n');
}

void	push_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *temp;
	if ((*stack_b))
	{
		temp = (*stack_b);
		(*stack_b) = (*stack_b)->next;
		temp->next = (*stack_a);
		(*stack_a) = temp;
	}
}

void	push_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *temp;

	if ((*stack_a))
	{
		temp = (*stack_a);
		(*stack_a) = (*stack_a)->next;
		temp->next = (*stack_b);
		(*stack_b) = temp;
	}
}
