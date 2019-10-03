/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 16:42:51 by amaquena          #+#    #+#             */
/*   Updated: 2019/09/20 16:25:15 by amaquena         ###   ########.fr       */
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
	new->index = 1; // remove when normalizer fixed
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
	t_stack *curr;
	t_stack *temp;

	curr = (*a);
	while (curr)
	{
		temp = (*a);
		while (temp)
		{
			if (curr->elem > temp->elem)
				curr->index++;
			temp = temp->next;
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
		ft_putstr(ft_strjoin("(" , ft_itoa(b->index)));
		ft_putstr(") ");
		b = b->next;
	}
	ft_putstr("\naction: \n");
	moves++;
}

void	push_a(t_stack **stack_a, t_stack **stack_b, int action)
{
	t_stack *temp;

	if ((*stack_b))
	{
		temp = (*stack_b);
		(*stack_b) = (*stack_b)->next;
		temp->next = (*stack_a);
		(*stack_a) = temp;
	}
	if (action != 3)
		ft_putendl("pa");
}

void	push_b(t_stack **stack_a, t_stack **stack_b, int action)
{
	t_stack *temp;

	if ((*stack_a))
	{
		temp = (*stack_a);
		(*stack_a) = (*stack_a)->next;
		temp->next = (*stack_b);
		(*stack_b) = temp;
	}
	if (action != 3)
		ft_putendl("pb");
}
