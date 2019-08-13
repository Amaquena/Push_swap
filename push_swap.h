/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <amaquena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 16:15:52 by amaquena          #+#    #+#             */
/*   Updated: 2019/08/13 16:06:48 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include "libft/libft.h"

void	swap_sa(int *stack_a);
void	swap_sb(int *stack_b);
void	swap_ss(int *stack_a, int *stack_b);
void	swap_ra(int *stack_a);
void	swap_rb(int *stack_b);
void	swap_rr(int *stack_a, int *stack_b);

#endif
