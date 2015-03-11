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
{
	if (*stack_b && (*stack_b)->next && *stack_b != (*stack_b)->next)
	{
		*stack_b = (*stack_b)->next;
		write(1, "rb", 2);
		return (1);
	}
	return (0);
}

int				rr(t_stack **stack_a, t_stack **stack_b);
{
	if ((*stack_a && (*stack_a)->next && *stack_a != (*stack_a)->next) &&
		(*stack_b && (*stack_b)->next && *stack_b != (*stack_b)->next))
	{
		*stack_a = (*stack_a)->next;
		*stack_b = (*stack_b)->next;
		write(1, "rr", 2);
		return (1);
	}
	return (0);
}

int				rra(t_stack **stack_a, t_stack **stack_b)
{
	if (*stack_a && (*stack_a)->prev && *stack_a != (*stack_a)->prev)
	{
		*stack_a = (*stack_a)->prev;
		write(1, "rra", 3);
		return (1);
	}
	return (0);
}

int				rrb(t_stack **stack_a, t_stack **stack_b);
{
	if (*stack_b && (*stack_b)->prev && *stack_b != (*stack_b)->prev)
	{
		*stack_b = (*stack_b)->prev;
		write(1, "rrb", 3);
		return (1);
	}
	return (0);
}
int				rra(t_stack **stack_a, t_stack **stack_b);
int				rrb(t_stack **stack_a, t_stack **stack_b);