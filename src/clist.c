#include "../includes/push_swap.h"
#include <stdlib.h>

static t_clist		new_clist(int data)
{
	t_clist			*new;

	if (!(new = (t_clist *)malloc(sizeof(t_clist))))
		return (NULL);
	new->data = data;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

void				push_clist(t_clist **first, int data)
{
	t_clist			*tmp;
	t_clist			*new;

	tmp = *first;
	if (!tmp)
	{
		*first = new_clist(data);
		return ;
	}
	new = new_clist(data);
	if (!(tmp->next))
	{
		new->next = new->prev = tmp;
		tmp->next = tmp->prev = new;
		*first = new;
		return ;
	}
	new->next = tmp;
	new->prev = tmp->prev;
	tmp->prev->next = new;
	tmp->prev = new;
}
