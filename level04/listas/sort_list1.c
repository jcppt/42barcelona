#include <stddef.h>
#include <stdio.h>

int cmp(int a, int b)
{
	if (a > b)
		return (1);
	return (0);
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int	temp = 0;
	t_list *head;

	head = lst;
	while (lst != NULL && lst->next != NULL)
	{
		if ((*cmp)(lst->data, lst->next->data) == 1)
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
