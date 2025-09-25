#include "ft_list.h"
#include <unistd.h>



t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	void	*temp
	tlist	*head;

	if (!list)
		return (NULL);
	head = lst;
	while(lst != NULL && lst->next != NULL)
	{
		if (*cmp(lst->data, lst->next->data)== 0)
		{
			temp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = temp;
		}
		else
			lst = lst->next;
	}
	return (head);
}

int ascending(int a, int b)
{
	return (a <= b);
}
