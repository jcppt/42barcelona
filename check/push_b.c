/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juan Ceravalls <jceraval@student.42ba      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:23:12 by Juan Cera         #+#    #+#             */
/*   Updated: 2025/08/03 15:34:24 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack *a, t_stack *b)
{
	t_node	*tmp;

	if (a->size == 0)
		return ;
	tmp = a->top;
	a->top = tmp->next;
	if (a->top)
		a->top->prev = NULL;
	a->size--;
	tmp->next = b->top;
	tmp->prev = NULL;
	if (b->top)
		b->top->prev = tmp;
	b->top = tmp;
	b->size++;
	printf("pb\n");
	update_pos(a, b);
}
