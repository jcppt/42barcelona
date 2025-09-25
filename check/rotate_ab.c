/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juan Ceravalls <jceraval@student.42ba      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 10:26:41 by Juan Cera         #+#    #+#             */
/*   Updated: 2025/08/03 17:30:55 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack *stack)
{
	t_node	*first;
	t_node	*last;

	if (!stack || stack->size < 2)
		return ;
	first = stack->top;
	last = stack->top;
	while (last->next)
		last = last->next;
	stack->top = first->next;
	stack->top->prev = NULL;
	last->next = first;
	first->next = NULL;
	first->prev = last;
	stack->last = first;
}

void	rr(t_stack *a, t_stack *b)
{
	if (!a || !b || a->size < 2 || b->size < 2)
		return ;
	rotate (a);
	rotate (b);
	printf("rr\n");
}
