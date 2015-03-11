#include "pushswap.h"

int				rrr(t_stack **stack_a, t_stack **stack_b);
{
	if ((*stack_a && (*stack_a)->prev && *stack_a != (*stack_a)->prev) &&
		(*stack_b && (*stack_b)->prev && *stack_b != (*stack_b)->prev))
	{
		*stack_a = (*stack_a)->prev;
		*stack_b = (*stack_b)->prev;
		write(1, "rrr", 2);
		return (1);
	}
	return (0);
}
