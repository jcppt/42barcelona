#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*head;
	int	tmp;

	head = list;
	while (!(tmp) && tmp->next != NULL)
	{
		if ((*cmp)(tmp->data, lst->next->data) == 0)
		{
			temp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = temp;
			lst = head;
		}
		else
			lst = lst->next;
	}
	return (head);
}
