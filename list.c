/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 16:42:51 by amaquena          #+#    #+#             */
/*   Updated: 2019/09/13 13:45:53 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **curr, const char *elem)
{
	t_stack			*new;

	digit_checker(elem);
	if (!(new = (t_stack *)malloc(sizeof(t_stack))))
		return ;
	new->elem = ft_atoi(elem);
	new->next = (*curr);
	new->index = 0;
	(*curr) = new;
	dup_checker((*curr), ft_atoi(elem));
}

/*
**void	pop(t_stack **curr)
**{
**	t_stack *pop;
**
**	pop = (*curr);
**	(*curr) = (*curr)->next;
**	free(pop);
**}
*/

void	normalizer(t_stack **a)
{
	t_stack	*curr;
	int		index;

	index = 1;
	curr = (*a);
	while (curr)
	{
		curr->index = index;
		curr = curr->next;
		index++;
	}
	curr = (*a);
	while (curr && curr->next)
	{
		if (curr->index < curr->next->index)
		{
			index = curr->index;
			curr->index = curr->next->index;
			curr->next->index = index;
		}
		curr = curr->next;
	}
}
void	disp_stack(t_stack *a, t_stack *b)
{
	static int moves = 0;

	ft_putstr(ft_strjoin("Stack A:\t moves: ", ft_itoa(moves)));
	ft_putchar('\n');
	while (a)
	{
		ft_putnbr(a->elem);
		ft_putstr(ft_strjoin("(" , ft_itoa(a->index)));
		ft_putstr(") ");
		a = a->next;
	}
	ft_putstr("\nStack B:\n");
	while (b)
	{
		ft_putnbr(b->elem);
		ft_putchar(' ');
		b = b->next;
	}
	ft_putstr("\naction: \n");
	moves++;
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
