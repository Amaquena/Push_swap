/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 10:35:17 by amaquena          #+#    #+#             */
/*   Updated: 2019/09/09 16:36:36 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort2(t_stack **a, t_stack **b)
{
	is_sorted((*a), (*b));
		if ((*a)->elem > (*a)->next->elem)
			swap(a);
		disp_stack((*a), (*b));
}

void	sort3(t_stack **a, t_stack **b)
{
	while (!(is_sorted((*a), (*b))))
	{
		if ((*a)->elem < (*a)->next->elem)
			reverse(a);
		else
			swap(a);
		disp_stack((*a), (*b));
	}
}

void	sort4(t_stack **a, t_stack **b)
{
	t_stack *temp;
	t_stack *curr;

	while (!(is_sorted((*a), (*b))))
	{
		curr = (*a);
		temp = (*a);
		while (curr)
		{
			if (temp->elem > curr->elem)
				temp = curr;
			curr = curr->next;
		}
		curr = (*a);
		while (curr)
		{
			if (curr->elem != temp->elem)
			{
				rotate(a);
				disp_stack((*a), (*b));
			}
			else 
			{
				push_b(a, b);
				disp_stack((*a), (*b));

			}
			curr = curr->next;
		}
		sort3(a, b);
		push_a(a, b);
		disp_stack((*a), (*b));
	}
}
