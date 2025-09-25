/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juan Ceravalls <jceraval@student.42ba      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 18:20:21 by Juan Cera         #+#    #+#             */
/*   Updated: 2025/07/13 18:50:19 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_stack *b)
{
	t_node	*first;
	t_node	*last;

	if (!b || b->size < 2 || !b->top)
		return ;
	first = b->top;
	last = b->top;
	while (last->next)
		last = last->next;
	b->top = first->next;
	b->top->prev = NULL;
	last->next = first;
	first->next = NULL;
	first->prev = last;
	b->last = first;
	printf("rb\n");
}
