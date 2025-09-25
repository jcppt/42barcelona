/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juan Ceravalls <jceraval@student.42ba      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:08:07 by Juan Cera         #+#    #+#             */
/*   Updated: 2025/07/14 13:18:34 by Juan Cera        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_stack *b)
{
	t_node	*prev;
	t_node	*last;

	if (!b || b->size < 2)
		return ;
	prev = NULL;
	last = b->top;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	if (prev)
		prev->next = NULL;
	last->next = b->top;
	b->top->prev = last;
	b->top = last;
	b->top->prev = NULL;
	b->last = prev;
	printf("rrb\n");
}
