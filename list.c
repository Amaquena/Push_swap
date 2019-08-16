/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 16:42:51 by amaquena          #+#    #+#             */
/*   Updated: 2019/08/16 17:03:51 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

stack_a		*new_list(const int elem)
{
	stack_a *new;

	if (!(new = (stack_a *)malloc(sizeof(stack_a))))
		return (NULL);
	new->elem = elem;
	new->next = NULL;
	return (new);
}
