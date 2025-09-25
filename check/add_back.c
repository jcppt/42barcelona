/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juan Ceravalls <jceraval@student.42ba      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 13:47:10 by Juan Cera         #+#    #+#             */
/*   Updated: 2025/08/03 14:33:58 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_back(t_stack *stack, t_node *new_node)
{
	if (!stack || !new_node)
		return ;
	if (stack->top == NULL)
	{
		stack->top = new_node;
		stack->last = new_node;
		new_node->prev = NULL;
		new_node->next = NULL;
	}
	else
	{
		stack->last->next = new_node;
		new_node->prev = stack->last;
		new_node->next = NULL;
		stack->last = new_node;
	}
	stack->size++;
}
