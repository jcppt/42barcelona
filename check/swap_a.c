/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juan Ceravalls <jceraval@student.42ba      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 10:51:11 by Juan Cera         #+#    #+#             */
/*   Updated: 2025/08/03 15:24:48 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	t_node	*first;
	t_node	*second;
	t_node	*third;

	if (!a || a-> size < 2)
		return ;
	first = a->top;
	second = first->next;
	third = second->next;
	second->next = first;
	second->prev = NULL;
	first->next = third;
	first->prev = second;
	if (third)
	{
		third->prev = first;
	}
	a->top = second;
	printf("sa\n");
}
