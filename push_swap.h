/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <amaquena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 16:15:52 by amaquena          #+#    #+#             */
/*   Updated: 2019/09/13 09:15:00 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
#include <stdio.h>

typedef struct			s_stack
{
	int					elem;
	int					index;
	struct s_stack		*next;
}						t_stack;

/*
**	manipulate list
*/

void		push(t_stack **curr, const char *elem);
void		pop(t_stack **curr);
void		disp_stack(t_stack *a, t_stack *b);
void		normalizer(t_stack **a);

/*
**	swap actions
*/

void		swap_ab(t_stack **a, t_stack **b, int action, int picker);
void		rotate_ab(t_stack **a, t_stack **b, int action, int picker);
void		reverse_ab(t_stack **a, t_stack **b, int action, int picker);
void		push_ab(t_stack **stack_a, t_stack **stack_b, int action, int picker);

/*
** Util
*/

int			is_sorted(t_stack **a, t_stack **b, int picker);
void		dup_checker(t_stack *stack, int value);
int			digit_checker(const char *argv);
void		print_msg(int msg);
int			stack_size(t_stack *a);

/*
** Algorithms
*/

void		sort2(t_stack **a, t_stack **b);
void		sort3(t_stack **a, t_stack **b);
void		sort4(t_stack **a, t_stack **b);
void		check_args(t_stack **a, t_stack **b);
int			find_largest(t_stack *a);
int			find_smallest(t_stack *a, int smallest);
void		ra_or_rra(t_stack **a, t_stack **b, int pos, int size);

#endif