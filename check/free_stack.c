/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juan Ceravalls <jceraval@student.42ba      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 10:08:30 by Juan Cera         #+#    #+#             */
/*   Updated: 2025/07/29 10:15:05 by Juan Cera        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *a)
{
	t_node	*current;
	t_node	*tmp;

	if (!a)
		return ;
	current = a->top;
	while (current)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	a->top = NULL;
}
