/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juan Ceravalls <jceraval@student.42ba      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 14:41:57 by Juan Cera         #+#    #+#             */
/*   Updated: 2025/08/03 14:50:42 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	t_node	*first;	
	t_node	*second;
	t_node	*third;

	if (!stack || stack->size < 2)
		return ;
	first = stack->top;
	second = first->next;
	third = second->next;
	second->next = first;
	second->prev = NULL;
	first->next = third;
	first->prev = second;
	if (third)
		third->prev = first;
	stack->top = second;
}

void	ss(t_stack *a, t_stack *b)
{
	if (!a || !b || a->size < 2 || b->size < 2)
		return ;
	swap(a);
	swap(b);
	printf("ss\n");
}
