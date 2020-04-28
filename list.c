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

void push(t_stack **curr, const char *elem)
{
	t_stack *new;
	int value;

	value = digit_checker(elem);
	if (!(new = (t_stack *)malloc(sizeof(t_stack))))
		return;
	new->elem = value;
	new->next = (*curr);
	new->index = 1; // remove when normalizer fixed
	(*curr) = new;
	new = NULL;
	dup_checker((*curr), value);
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

void pop(t_stack **curr)
{
	t_stack *pop;

	while ((*curr))
	{
		pop = (*curr);
		(*curr) = (*curr)->next;
		free(pop);
	}
}

void normalizer(t_stack **a)
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

void disp_stack(t_stack *a, t_stack *b)
{
	static int moves = -1;

	ft_putstr("moves: ");
	moves++;
	ft_putnbr(moves);
	ft_putstr("\nA       B\n");
	while (a || b)
	{
		if (a)
			ft_putstr(ft_itoa(a->elem));
		ft_putstr("       ");
		if (b)
			ft_putstr(ft_itoa(b->elem));
		ft_putchar('\n');
		if (a)
			a = a->next;
		if (b)
			b = b->next;
	}
	ft_putchar('\n');
}