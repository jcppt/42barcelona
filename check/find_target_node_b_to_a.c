/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_target_node_b_to_a.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juan Ceravalls <jceraval@student.42ba      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:46:10 by Juan Cera         #+#    #+#             */
/*   Updated: 2025/08/03 19:38:21 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*find_max_node(t_stack *stack)
{
	t_node	*current;
	t_node	*max_node;

	if (!stack || !stack->top)
		return (NULL);
	current = stack->top;
	max_node = current;
	while (current)
	{
		if (current->sort > max_node->sort)
			max_node = current;
		current = current->next;
	}
	return (max_node);
}

t_node	*find_min_node(t_stack *stack)
{
	t_node	*current;
	t_node	*min_node;

	if (!stack || !stack->top)
		return (NULL);
	current = stack->top;
	min_node = current;
	while (current)
	{
		if (current->sort < min_node->sort)
			min_node = current;
		current = current->next;
	}
	return (min_node);
}

t_node	*find_target_node_b_to_a(t_node *b_node_to_push, t_stack *a)
{
	t_node	*current_a;
	t_node	*target_node_a;
	int		min_sort;
	int		max_sort;

	if (!b_node_to_push || !a || !a->top)
		return (NULL);
	min_sort = find_min_node(a)->sort;
	max_sort = find_max_node(a)->sort;
	if (b_node_to_push->sort < min_sort || b_node_to_push->sort > max_sort)
		return (find_min_node(a));
	target_node_a = NULL;
	current_a = a->top;
	while (current_a)
	{
		if (current_a->sort > b_node_to_push->sort)
			if (target_node_a == NULL || current_a->sort < target_node_a->sort)
				target_node_a = current_a;
		current_a = current_a->next;
	}
	return (target_node_a);
}
