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

void		is_sorted(t_stack **a, t_stack **b, int picker);
int			check_sorted(t_stack **a, t_stack **b);
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
void		sort5(t_stack **a, t_stack **b);
void 		sort99(t_stack **a, t_stack **b, int stack_size);
void 		sort100(t_stack **a, t_stack **b);
void		sort500(t_stack **a, t_stack **b);

/*
** Algo assistance functions
*/

int			find_nth_pos(t_stack *a, int n);
int			find_largest_val(t_stack *stack);
int			find_second_largest(t_stack *stack, int highest);
void		ra_or_rra(t_stack **a, t_stack **b, int pos, int size, int range_value);
void		rb_or_rrb(t_stack **a, t_stack **b, int pos, int size);
void		pushback_b(t_stack **stack_a, t_stack **stack_b, int size);
int			count_moves(t_stack *stack, int postion);
void		pushback_b_2(t_stack **a, t_stack **b);

#endif