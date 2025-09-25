/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceraval <jceraval@student.42ba            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 17:33:17 by jceraval          #+#    #+#             */
/*   Updated: 2025/08/03 17:33:29 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *a)
{
	t_node	*prev;
	t_node	*last;

	if (!a || a->size < 2)
		return ;
	prev = NULL;
	last = a->top;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	if (prev)
		prev->next = NULL;
	last->next = a->top;
	a->top->prev = last;
	a->top = last;
	a->top->prev = NULL;
	a->last = prev;
	printf("rra\n");
}
