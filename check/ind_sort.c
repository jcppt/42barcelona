/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ind_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juan Ceravalls <jceraval@student.42ba      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:26:00 by Juan Cera         #+#    #+#             */
/*   Updated: 2025/08/03 18:09:24 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	no_duplicates(t_node *a_nod)
{
	t_node	*current;
	t_node	*tmp;

	current = a_nod;
	while (current)
	{
		tmp = current->next;
		while (tmp)
		{
			if (tmp->sort == current->sort)
			{
				write(1, "Error numeros duplicados\n", 25);
				exit(1);
			}
			tmp = tmp->next;
		}
		current = current->next;
	}
}

void	ind_sort(t_node *a_nod)
{
	t_node	*tmp;
	t_node	*pos;
	int		i;

	pos = a_nod;
	while (pos)
	{
		i = 0;
		tmp = a_nod;
		while (tmp)
		{
			if (tmp->content < pos->content)
				i++;
			tmp = tmp->next;
		}
		pos->sort = i;
		pos = pos->next;
	}
	no_duplicates(a_nod);
}
