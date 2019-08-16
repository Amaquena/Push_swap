/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <amaquena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 16:15:52 by amaquena          #+#    #+#             */
/*   Updated: 2019/08/16 17:05:19 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct			a_list
{
	int					elem;
	struct a_list		*next;
}						stack_a;

/*
**	linked list for stack a
*/

stack_a		*new_list(const int elem);

/*
**	swap actions
*/

void		swap_sa(int *stack_a);
void		swap_sb(int *stack_b);
void		swap_ss(int *stack_a, int *stack_b);
void		swap_ra(int *stack_a);
void		swap_rb(int *stack_b);
void		swap_rr(int *stack_a, int *stack_b);

#endif
