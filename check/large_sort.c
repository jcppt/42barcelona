/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   large_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juan Ceravalls <jceraval@student.42ba      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:21:36 by Juan Cera         #+#    #+#             */
/*   Updated: 2025/08/03 18:19:48 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	large_sort(t_stack *a, t_stack *b)
{
	t_node	*current_b;
	t_node	*target_a;
	t_node	*cheapest_node;

	if (count_nodes(a->top) > 3)
		first_push_a_b(a, b);
	if (!is_sorted (a))
		sort_three(a);
	while (b->top)
	{
		update_pos(a, b);
		current_b = b->top;
		while (current_b)
		{
			target_a = find_target_node_b_to_a(current_b, a);
			calculate_node_cost(current_b, target_a);
			current_b = current_b->next;
		}
		cheapest_node = find_cheapest(b);
		execute_move(a, b, cheapest_node);
	}
	if (!is_sorted(a))
		finalize_sort(a);
}
