#include "list.h"
#include <stddef.h>

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int		tmp;
	t_list	*head;
	
	lst = head;
	while (lst != NULL && lst->next != NULL)
	{
		if (*cmp (lst->val, lst->next->val) != 0)
		{
			tmp = lst->val;
			lst->val = lst->next->val;
			lst->next->val = tmp;
			lst = head;
		}
		else
			lst = lst->next;
	}
	return (head);
}
