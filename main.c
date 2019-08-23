#include "push_swap.h"

int main(int ac,char **av)
{
	t_stack *stack_a;
	t_stack *stack_b = NULL;
	int j;

	if (ac > 1)
	{
		j = ac - 1;
		while (j > 0)
			push(&stack_a, ft_atoi(av[j--]));
//		j = ac - 1;
//		while (j > 0)
//			push (&stack_b, ft_atoi(av[j--]));
		ft_putstr("stack a: ");
		disp_stack(stack_a);
		ft_putstr("\t\tstack b: ");
		disp_stack(stack_b);
		ft_putchar('\n');
		push_b(&stack_a, &stack_b);
		push_b(&stack_a, &stack_b);
		ft_putstr("stack a: ");
		disp_stack(stack_a);
		ft_putstr("\t\tstack b: ");
		disp_stack(stack_b);
		ft_putchar('\n');
	}
	return (0);
}
