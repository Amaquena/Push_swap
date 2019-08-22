#include "push_swap.h"

int main(int ac,char **av)
{
	t_stack *stack_a;
	t_stack *stack_b;
	int j;

	if (ac > 1)
	{
		j = ac - 1;
		while (j > 0)
			push(&stack_a, ft_atoi(av[j--]));
		j = ac - 1;
		while (j > 0)
			push (&stack_b, ft_atoi(av[j--]));
		swap_ss(&stack_a, &stack_b);
		disp_stack(&stack_a);
		ft_putchar('\n');
		disp_stack(&stack_b);
	//	str = strmerge(av + 1, ac - 1);
	//	stack_a *head;
	//	head = new_list(3);
	//	ft_putnbr(head->elem);
	}
	return (0);
}
