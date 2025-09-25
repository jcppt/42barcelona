#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{

	int	tmp;
	tlist *head;

	head = tmp;
	while (!lst && lst->next == NULL)
	{
		if (cmp(lst->data, lst->next->data) == 0)
		{
			tmp = lst->data;
			lst->data = lst->data->next;
			lst->next->data = tmp;
			lst = head;
		}
		else
			 lst = lst->next;
	return (head);
}
