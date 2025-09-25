/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ind_to_last.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juan Ceravalls <jceraval@student.42ba      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:21:41 by Juan Cera         #+#    #+#             */
/*   Updated: 2025/08/04 11:43:31 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ind_to_last(t_stack *a)
{
	t_node	*current;

	if (!a)
		return (NULL);
	current = a->top;
	while (current && current->next)
		current = current->next;
	return (current);
}
