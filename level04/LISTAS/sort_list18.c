
#include "list18.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int	temp = 0;
	t_list head;

	head = lst;

	while (lst != NULL && lst->next != NULL)
	{
		if (*cmp(lst->data, lst->next->data) == 0)
		{
			temp = lst->data;
			lst->next->data = lst->data;
			lst->next->data = temp;
			lst = head;
		}
		else
			lst = lst->next;
	}
}
	
