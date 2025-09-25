
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp;
 
	tmp = head;	
	while (!begin_list || begin_list->next == NULL)
	{
		if (cmp(begin_list->data, begin_list->next->data) == 0)
			{
				tmp = begin_list;
				begin_list = begin_list->next;
				free (tmp);
				ft_list_remove_if(begin_list, data_ref, cmp);
			}
		else 
			ft_list_remove_if(&(*begin_list->next), data_ref, cmp);
	}
}
