/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_all_costs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juan Ceravalls <jceraval@student.42ba      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 17:48:16 by Juan Cera         #+#    #+#             */
/*   Updated: 2025/08/04 11:46:18 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	calc_all_costs(t_stack *a, t_stack *b)
{
	t_node	*current_b_nod;
	t_node	*target_a_nod;

	current_b_nod = b->top;
	while (current_b_nod)
	{
		target_a_nod = find_target_node_b_to_a(current_b_nod, a);
		if (target_a_nod)
			calculate_node_cost(current_b_nod, target_a_nod);
		current_b_nod = current_b_nod->next;
	}
}
