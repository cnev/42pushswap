#include "pushswap.h"

int				sa(t_stack **stack_a, t_stack **stack_b)
{
	int			tmp;

	if (*stack_a && (*stack_a)->next && ((*stack_a)->next != *stack_a))
	{
		tmp = (*stack_a)->elem;
		(*stack_a)->elem = (*stack_a)->next->elem;
		(*stack_a)->next->elem = tmp;
		write(1, "sa", 2);
		return (1);
	}
	return (0);
}

int				sb(t_stack **stack_a, t_stack **stack_b)
{
	int			tmp;

	if (*stack_b && (*stack_b)->next && ((*stack_b)->next != *stack_b))
	{
		tmp = (*stack_b)->elem;
		(*stack_b)->elem = (*stack_b)->next->elem;
		(*stack_b)->next->elem = tmp;
		write(1, "sb", 2);
		return (1);
	}
	return (0);
}

int				sb(t_stack **stack_a, t_stack **stack_b)
{
	int			tmp;

	if ((*stack_a && (*stack_a)->next && ((*stack_a)->next != *stack_a)) &&
		(*stack_b && (*stack_b)->next && ((*stack_b)->next != *stack_b)))
	{
		tmp = (*stack_a)->elem;
		(*stack_a)->elem = (*stack_a)->next->elem;
		(*stack_a)->next->elem = tmp;
		tmp = (*stack_b)->elem;
		(*stack_b)->elem = (*stack_b)->next->elem;
		(*stack_b)->next->elem = tmp;
		write(1, "ss", 2);
		return (1);
	}
		return (0);
}

int				pa(t_stack **stack_a, t_stack **stack_b)
{
	int			tmp;

	if (!(*stack_b))
		return (0);
	tmp = (*stack_b)->elem;
	stack_del(*stack_b);
	stack_pushback(stack_a, tmp);
	write(1, "pa", 2);
	return (1);
}

int				pb(t_stack **stack_a, t_stack **stack_b)
{
	int			tmp;

	if (!(*stack_a))
		return (0);
	tmp = (*stack_b)->elem;
	stack_del(*stack_a);
	stack_pushback(stack_b, tmp);
	write(1, "pb", 2);
	return (1);
}