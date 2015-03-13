#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdilb.h>
# include <unistd.h>
# define TRUE		1
# define FALSE		0

typedef int			t_bool;

typedef struct	s_stack
{
	int					elem;
	struct s_stack		*prev;
	struct s_stack		*next;	
}						t_stack;

/*
** operations_1
*/
int				sa(t_stack **stack_a, t_stack **stack_b);
int				sb(t_stack **stack_a, t_stack **stack_b);
int				ss(t_stack **stack_a, t_stack **stack_b);
int				pa(t_stack **stack_a, t_stack **stack_b);
int				pb(t_stack **stack_a, t_stack **stack_b);

/*
** operations_2
*/
int				ra(t_stack **stack_a, t_stack **stack_b);
int				rb(t_stack **stack_a, t_stack **stack_b);
int				rr(t_stack **stack_a, t_stack **stack_b);
int				rra(t_stack **stack_a, t_stack **stack_b);
int				rrb(t_stack **stack_a, t_stack **stack_b);

/*
** operations_3
*/
int				rrr(t_stack **stack_a, t_stack **stack_b);

/*
** stack.c
*/
t_stack			*new_stack(int val);
void			pushback_stack(t_stack **head, int val);
void			pop_stack(t_stack **head);
void			stack_display(t_stack *head);
#endif