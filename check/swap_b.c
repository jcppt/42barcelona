/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceraval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 14:16:56 by jceraval          #+#    #+#             */
/*   Updated: 2025/08/03 15:30:08 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_stack *b)
{
	t_node	*first;
	t_node	*second;
	t_node	*third;

	if (!b || b->size < 2)
		return ;
	first = b->top;
	second = first->next;
	third = second->next;
	second->next = first;
	second->prev = NULL;
	first->next = third;
	first->prev = second;
	if (third)
		third->prev = first;
	b->top = second;
	printf("sb\n");
}
