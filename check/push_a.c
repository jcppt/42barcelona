/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juan Ceravalls <jceraval@student.42ba      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 15:53:17 by Juan Cera         #+#    #+#             */
/*   Updated: 2025/08/03 14:52:16 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	t_node	*tmp;

	if (b->size == 0)
		return ;
	tmp = b->top;
	b->top = tmp->next;
	if (b->top)
		b->top->prev = NULL;
	b->size--;
	tmp->next = a->top;
	tmp->prev = NULL;
	if (a->top)
		a->top->prev = tmp;
	a->top = tmp;
	a->size++;
	printf("pa\n");
	update_pos(a, b);
}
