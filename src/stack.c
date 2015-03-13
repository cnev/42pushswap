#include "../includes/push_swap.h"

static t_stack		*new_stack(int val)
{
	t_stack			*tmp;

	if (!(tmp = (t_stack *)malloc(sizeof(t_stack))))
		return (NULL);
	tmp->elem = val;
	tmp->prev = tmp;
	tmp->next = tmp;
	return (tmp);
}

void			pushback_stack(t_stack **head, int val)
{
	t_stack			*tmp;
	t_stack			*new_elem;

	if (!*head)
	{
		*head = new_stack(val);
	}
	else if (*head == (*head)->next)
	{
		new_elem = new_stack(val);
		new_elem->prev = new_elem->next = *head;
		(*head)->prev = (*head)->next = new_elem;
	}
	else
	{
		new_elem = new_stack(val);
		tmp = (*head)->prev;
		new_elem->prev = tmp;
		new_elem->next = *head;
		(*head)->prev = new_elem;
		tmp->next = new_elem;
	}
}

void			pop_stack(t_stack **head)
{
	t_stack			*tmp;
	t_stack			*prev;

	if (!*head)
		return ;
	tmp = (*head)->next;
	prev = (*head)->prev;
	if (*head == tmp)
	{
		free(tmp);
		*head = NULL;
		return ;
	}
	prev->next = tmp;
	tmp->prev = prev;
	free(*head);
	*head = tmp;
}

void			stack_display(t_stack *head, char id)
{
	t_stack			*tmp;

	tmp = head;
	ft_putchar(id);
	ft_putstr(": ");
	if (!tmp)
	{
		ft_putchar('\n');
		return ;
	}
	ft_putnbr(tmp->elem);
	if (tmp->next == tmp)
	{
		ft_putchar('\n');
		return ;
	}
	tmp = tmp->next;
	while (tmp != head)
	{
		ft_putnbr(tmp->elem);
		ft_putchar(' ');
		tmp = tmp->next;
	}
	ft_putchar('\n');
}
