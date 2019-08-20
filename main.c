#include "push_swap.h"

int main(int ac,char **av)
{
//	char *str;
	t_stack *stack;
	int i;
	int j;

	if (ac > 1)
	{
		i = 0;
		j = ac - 1;
		while (i < ac && j > 0)
		{
			push(&stack, ft_atoi(av[j]));
			i++;
			j--;
		}
		disp_stack(&stack);
		pop(&stack);
		ft_putchar('\n');
		disp_stack(&stack);
	//	str = strmerge(av + 1, ac - 1);
	//	stack_a *head;
	//	head = new_list(3);
	//	ft_putnbr(head->elem);
	}
	return (0);
}
