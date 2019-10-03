/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 10:15:21 by amaquena          #+#    #+#             */
/*   Updated: 2019/09/19 14:54:54 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse(t_stack **a, t_stack **b, int action)
{
	t_stack *temp;
	t_stack *curr;

	if ((*a) && (*a)->next)
	{
		curr = (*a);
		while (curr->next->next)
			curr = curr->next;
		temp = curr->next;
		curr->next = NULL;
		temp->next = (*a);
		(*a) = temp;
	}
	if (action == 1)
		ft_putendl("rra");
	else if (action == 2)
		ft_putendl("rrb");
	is_sorted((*a), (*b));
}

void	reverse_ab(t_stack **a, t_stack **b, int action)
{
	if (action == 3)
	{
		reverse(a, b, 3);
		reverse(a, b, 3);
	}
	else if (action == 1 || action == 2)
	{
		reverse(a, b, 1);
		reverse(a, b, 2);
	}
}
