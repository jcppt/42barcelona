/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finalize_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juan Ceravalls <jceraval@student.42ba      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 13:17:45 by Juan Cera         #+#    #+#             */
/*   Updated: 2025/08/03 17:27:57 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	finalize_sort(t_stack *a)
{
	t_node	*smallest_node;
	int		size;

	update_pos(a, NULL);
	size = count_nodes(a->top);
	smallest_node = a->top;
	while (smallest_node && smallest_node->sort != 0)
		smallest_node = smallest_node->next;
	if (!smallest_node)
		return ;
	if (smallest_node->pos <= size / 2)
	{
		while (a->top->sort != 0)
			ra (a);
	}
	else
	{
		while (a->top->sort != 0)
			rra (a);
	}
}
