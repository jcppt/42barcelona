/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_push_a_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juan Ceravalls <jceraval@student.42ba      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:03:08 by Juan Cera         #+#    #+#             */
/*   Updated: 2025/08/03 17:56:15 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	first_push_a_b(t_stack *a, t_stack*b)
{
	int	n_nodes;
	int	i;

	i = count_nodes(a->top);
	n_nodes = count_nodes(a->top);
	pb (a, b);
	pb (a, b);
	if (b->top->sort < b->top->next->sort)
		sb (b);
	while (i > 3)
	{
		if (a->top->sort >= n_nodes / 2)
		{
			pb(a, b);
			if (b->top->sort < b->top->next->sort)
				sb (b);
		}
		else if (a->top->sort < n_nodes / 2)
		{
			pb(a, b);
			rb (b);
		}
		i--;
	}
}
