#include "push_swap.h"

int     find_nth_pos(t_stack *stack, int n)
{
    int pos;

    pos = 1;
    while (stack)
    {
        if (stack->index == n)
            break ;
        stack = stack->next;
        pos++;
    }
    return (pos);
}

int find_largest_val(t_stack *stack)
{
    int largest;

    largest = stack->index;
    while (stack)
    {
        if (largest < stack->index)
            largest = stack->index;
        stack = stack->next;
    }
    return (largest);
}

int     find_second_largest(t_stack *stack, int highest)
{
    int largest;

    largest = 0;
    while (stack)
    {
        if (stack->index > largest)
            if (stack->index < highest)
                largest = stack->index;
        stack = stack->next;
    }
    return (largest);
}

int count_moves(t_stack *stack, int pos)
{
    int size;

    size = stack_size(stack);
    return ((pos > (size / 2)) ? size - pos : pos);
}