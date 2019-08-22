/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 16:42:51 by amaquena          #+#    #+#             */
/*   Updated: 2019/08/22 16:51:52 by amaquena         ###   ########.fr       */
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

void	disp_stack(t_stack **stacka)
{
	t_stack *temp;

	temp = (*stacka);
	while (temp)
	{
		ft_putnbr(temp->elem);
		temp = temp->next;
	}
}
