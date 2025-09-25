/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_cheapest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juan Ceravalls <jceraval@student.42ba      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 13:14:53 by Juan Cera         #+#    #+#             */
/*   Updated: 2025/08/03 18:17:11 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*find_cheapest(t_stack *a)
{
	t_node	*current;
	t_node	*cheapest_nod;
	int		min_cost;

	current = a->top;
	cheapest_nod = current;
	min_cost = current->cost;
	while (current)
	{
		if (current->cost < min_cost)
		{
			min_cost = current->cost;
			cheapest_nod = current;
		}
		current = current->next;
	}
	return (cheapest_nod);
}
