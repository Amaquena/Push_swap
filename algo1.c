#include "push_swap.h"

void sort100(t_stack **a, t_stack **b)
{
	int currentIndexValue;
	int range;

	currentIndexValue = 0;
	range = 0;
	while (*a)
	{
		range += 20;
		while (currentIndexValue <= range)
		{
			if (!(*a))
				break;
			if ((*a)->index <= range)
			{
				currentIndexValue++;
				push_ab(a, b, 2, 2);
			}
			else
				rotate_ab(a, b, 1, 2);
		}
	}
	pushback_b(a, b, currentIndexValue);
}

void sort500(t_stack **a, t_stack **b)
{
	int range;
	int rangeCounter;

	range = 0;
	rangeCounter = 0;
	while (*a)
	{
		range += 50;
		while (rangeCounter <= range)
		{
			if (!(*a))
				break;
			if ((*a)->index <= range)
			{
				rangeCounter++;
				push_ab(a, b, 2, 2);
			}
			else
				rotate_ab(a, b, 1, 2);
		}
	}
	pushback_b_2(a, b);
}