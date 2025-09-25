/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juan Ceravalls <jceraval@student.42ba      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:25:38 by Juan Cera         #+#    #+#             */
/*   Updated: 2025/08/03 17:29:33 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate(t_stack *stack)
{
	t_node	*prev;
	t_node	*last;

	if (!stack || stack->size < 2)
		return ;
	prev = NULL;
	last = stack->top;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	if (prev)
		prev->next = NULL;
	last->next = stack->top;
	stack->top->prev = last;
	stack->top = last;
	stack->top->prev = NULL;
	stack->last = prev;
}

void	rrr(t_stack *a, t_stack *b)
{
	if (!a || !b || a->size < 2 || b->size < 2)
		return ;
	rev_rotate(a);
	rev_rotate(b);
	printf("rrr\n");
}
