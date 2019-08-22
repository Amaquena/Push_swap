/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <amaquena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 16:15:52 by amaquena          #+#    #+#             */
/*   Updated: 2019/08/22 16:58:03 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct			s_stack
{
	int					elem;
	struct s_stack		*next;
}						t_stack;

/*
**	linked list for stack a
*/

void		push(t_stack **curr, const int elem);
void		pop(t_stack **curr);
void		disp_stack(t_stack **stacka);

/*
**	swap actions
*/


void		swap_sa(t_stack **stack_a);
void		swap_sb(t_stack **stack_b);
void		swap_ss(t_stack **stack_a, t_stack **stack_b);
/*
void		swap_ra(int *stack_a, int size);
void		swap_rb(int *stack_b, int size);
void		swap_rr(int *stack_a, int *stack_b);
*/
#endif
