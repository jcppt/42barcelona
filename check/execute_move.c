/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_move.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juan Ceravalls <jceraval@student.42ba      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 15:58:48 by Juan Cera         #+#    #+#             */
/*   Updated: 2025/08/03 15:50:47 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	double_rotation(t_stack *a, t_stack *b, int *a_move, int *b_move)
{
	while (*a_move > 0 && *b_move > 0)
	{
		rr (a, b);
		(*a_move)--;
		(*b_move)--;
	}
	while (*a_move < 0 && *b_move < 0)
	{
		rrr (a, b);
		(*a_move)++;
		(*b_move)++;
	}
}

static void	single_rotation(t_stack *a, t_stack *b, int *a_move, int *b_move)
{
	while (*a_move > 0)
	{
		ra (a);
		(*a_move)--;
	}
	while (*a_move < 0)
	{
		rra (a);
		(*a_move)++;
	}
	while (*b_move > 0)
	{
		rb (b);
		(*b_move)--;
	}
	while (*b_move < 0)
	{
		rrb (b);
		(*b_move)++;
	}
}

void	execute_move(t_stack *a, t_stack *b, t_node *cheapest_node)
{
	int	a_move;
	int	b_move;

	a_move = cheapest_node->a_stack;
	b_move = cheapest_node->b_stack;
	double_rotation(a, b, &a_move, &b_move);
	single_rotation(a, b, &a_move, &b_move);
	pa (a, b);
}
