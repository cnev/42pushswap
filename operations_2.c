#include "pushswap.h"

int				ra(t_stack **stack_a, t_stack **stack_b)
{
	if (*stack_a && (*stack_a)->next && *stack_a != (*stack_a)->next)
	{
		*stack_a = (*stack_a)->next;
		write(1, "ra", 2);
		return (1);
	}
	return (0);
}
int				rb(t_stack **stack_a, t_stack **stack_b);
int				rr(t_stack **stack_a, t_stack **stack_b);
int				rra(t_stack **stack_a, t_stack **stack_b);
int				rrb(t_stack **stack_a, t_stack **stack_b);