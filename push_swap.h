/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <amaquena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 16:15:52 by amaquena          #+#    #+#             */
/*   Updated: 2019/08/23 12:34:52 by amaquena         ###   ########.fr       */
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
void		disp_stack(t_stack *stack);
void		push_a(t_stack **stack_a, t_stack **stack_b);
void		push_b(t_stack **stack_a, t_stack **stack_b);
/*
**	swap actions
*/


void		swap(t_stack **stack);
void		swap_ab(t_stack **stack_a, t_stack **stack_b);
void		rotate(t_stack **stack);
void		rotate_ab(t_stack **stack_a, t_stack **stack_b);
void		reverse(t_stack **stack);
#endif
