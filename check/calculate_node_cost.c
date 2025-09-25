/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_node_cost.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juan Ceravalls <jceraval@student.42ba      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 11:52:49 by Juan Cera         #+#    #+#             */
/*   Updated: 2025/08/04 10:27:27 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	calculate_cost_rr(t_node *t_a_nod, t_node *b_nod)
{
	int	cost;

	if (t_a_nod->pos > b_nod->pos)
		cost = t_a_nod->pos;
	else
		cost = b_nod->pos;
	return (cost);
}

int	calculate_cost_rrr(t_node *t_a_nod, t_node *b_nod)
{
	int	cost;
	int	a_rev_pos_abs;
	int	b_rev_pos_abs;

	a_rev_pos_abs = abs(t_a_nod->rev_pos);
	b_rev_pos_abs = abs(b_nod->rev_pos);
	if (a_rev_pos_abs > b_rev_pos_abs)
		cost = a_rev_pos_abs;
	else
		cost = b_rev_pos_abs;
	return (cost);
}

static void	update_opt_strategy(t_node *t_a_nod, int cost, int a_mov, int b_mov)
{
	if (cost < t_a_nod->cost)
	{
		t_a_nod->cost = cost;
		t_a_nod->a_stack = a_mov;
		t_a_nod->b_stack = b_mov;
	}
}

void	calculate_node_cost(t_node *b_nod, t_node *t_a_nod)
{
	int	cost_rrr;
	int	cost_ra_rrb;
	int	cost_rra_rb;

	b_nod->cost = calculate_cost_rr(t_a_nod, b_nod);
	b_nod->b_stack = b_nod->pos;
	b_nod->a_stack = t_a_nod->pos;
	cost_rrr = calculate_cost_rrr(t_a_nod, b_nod);
	update_opt_strategy(b_nod, cost_rrr, t_a_nod->rev_pos, b_nod->rev_pos);
	cost_ra_rrb = t_a_nod->pos + abs(b_nod->rev_pos);
	update_opt_strategy(b_nod, cost_ra_rrb, t_a_nod->pos, b_nod->rev_pos);
	cost_rra_rb = abs(t_a_nod->rev_pos) + b_nod->pos;
	update_opt_strategy(b_nod, cost_rra_rb, t_a_nod->rev_pos, b_nod->pos);
}
