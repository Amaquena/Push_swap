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
void		push_a(t_stack **stack_a, t_stack **stack_b, int action);
void		push_b(t_stack **stack_a, t_stack **stack_b, int action);
void		normalizer(t_stack **a);
/*
**	swap actions
*/


void		swap(t_stack **a, t_stack **b, int action);
void		swap_ab(t_stack **a, t_stack **b, int action);
void		rotate(t_stack **a, t_stack **b, int action);
void		rotate_ab(t_stack **a, t_stack **ab, int action);
void		reverse(t_stack **a, t_stack **b, int action);
void		reverse_ab(t_stack **a, t_stack **b, int action);

/*
** Util
*/

int			is_sorted(t_stack *a, t_stack *b);
void		dup_checker(t_stack *stack, int value);
void		digit_checker(const char *argv);
void		error_msg(void);
int			stack_size(t_stack *a);

/*
** Algorithms
*/

void		sort2(t_stack **a, t_stack **b);
void		sort3(t_stack **a, t_stack **b);
void		sort4(t_stack **a, t_stack **b);
void	check_args(t_stack **a, t_stack **b);
int			find_largest(t_stack *a);
int			find_smallest(t_stack *a, int smallest);
void		ra_or_rra(t_stack **stack, t_stack **b, int pos, int size);

#endif