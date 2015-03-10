#include "pushswap.h"

int				sa(t_stack *stack_a, t_stack *stack_b)
{
	int			tmp;

	if (stack_a && stack_a->next && (stack_a->next != stack_a))
	{
		tmp = stack_a->elem;
		stack_a->elem = stack_a->next->elem;
		stack_a->next->elem = tmp;
		write(1, "sa", 3);
		return (1);
	}
	else
		return (0);
	
}

int				sb(t_stack *stack_a, t_stack *stack_b);
int				ss(t_stack *stack_a, t_stack *stack_b);
int				pa(t_stack *stack_a, t_stack *stack_b);
int				pb(t_stack *stack_a, t_stack *stack_b);