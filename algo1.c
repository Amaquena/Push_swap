#include "push_swap.h"

void sort50(t_stack **a, t_stack **b, int stack_size)
{
	int range;
	int i;
	int pos;

	range = 0;
	i = 0;
	pos = 0;
	while (*a)
	{
		range += 20;
		while (i < range)
		{
			pos = find_smallest_pos(*a, i);
			ra_or_rra(a, b, pos, stack_size, i);
			push_ab(a, b, 2, 2);
			i++;
		}
	}
	// sort5(a, b);
	// disp_stack(*a, *b);
	while (*b)
	{
		push_ab(a, b, 1, 2);
		// rotate_ab(a, b, 1, 2);
	}
}