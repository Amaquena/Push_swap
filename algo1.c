#include "push_swap.h"

void sort50(t_stack **a, t_stack **b, int stack_size)
{
	int i;
	int pos;

	i = 0;
	pos = 0;
	while (*a)
	{
		pos = find_smallest_pos(*a, i);
		ra_or_rra(a, b, pos, stack_size, i);
		push_ab(a, b, 2, 2);
		i++;
	}
	while (*b)
		push_ab(a, b, 1, 2);
}