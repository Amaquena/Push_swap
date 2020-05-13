#include "push_swap.h"

static void push_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *temp;

	if ((*stack_b))
	{
		temp = (*stack_b);
		(*stack_b) = (*stack_b)->next;
		temp->next = (*stack_a);
		(*stack_a) = temp;
	}
}

static void push_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *temp;

	if ((*stack_a))
	{
		temp = (*stack_a);
		(*stack_a) = (*stack_a)->next;
		temp->next = (*stack_b);
		(*stack_b) = temp;
	}
}

static void	displayAction(int action, int picker)
{
	if (action == 1 && picker == 2)
		ft_putendl("pa");
	else if (action == 2 && picker == 2)
		ft_putendl("pb");
}

void	push_ab(t_stack **a, t_stack **b, int action, int picker)
{
	if (action == 1)
	{
		push_a(a, b);
		displayAction(1, picker);
	}
	else if (action == 2)
	{
		push_b(a, b);
		displayAction(2, picker);
	}
}
