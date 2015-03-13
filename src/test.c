#include "../includes/pushswap.h"

#include <stdlib.h>

int main(void)
{
	t_stack			*stack1 = NULL;
	t_stack			*stack2 = NULL;

	pushback_stack(&stack1, 5);
	pushback_stack(&stack1, 2);
	pushback_stack(&stack1, 3);
	pushback_stack(&stack1, 7);
	pushback_stack(&stack1, 1);

	stack_display(head);
	return (0);
}
