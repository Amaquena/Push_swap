/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_r.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 15:29:19 by amaquena          #+#    #+#             */
/*   Updated: 2019/08/13 16:05:18 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap_ra(int *stack_a, int size)
{
	int temp;
	int i;

	temp = stack_a[0];
	i = 0;
	while (i < size)
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[i] = temp;
}

void	swap_rb(int *stack_b, int size)
{
	int temp;
	int i;

	temp = stack_b[0];
	i = 0;
	while (i < size)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[i] = temp;
}

void	swap_rr(int *stack_a, int *stack_b)
{
	swap_ra(stack_a);
	swap_rb(stack_b);
}
