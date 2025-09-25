/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_forward_backward.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceraval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:35:51 by jceraval          #+#    #+#             */
/*   Updated: 2025/08/03 14:24:43 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_forward_and_backward(t_node *top)
{
	t_node	*current;
	t_node	*last;

	current = top;
	last = NULL;
	printf("Recorrido hacia adelante:\n");
	while (current)
	{
		printf("content: %d, prev: %p, this: %p, next: %p\n",
			current->content, (void*) current->prev,
			(void*) current, (void*) current->next);
		last = current;
		current = current->next;
	}
	printf("\nRecorrido hacia atrás:\n");
	while (last)
	{
		printf("content: %d, prev: %p, this: %p, next: %p\n",
			last->content, (void*) last->prev,
			(void*) last, (void*) last->next);
		last = last->prev;
	}
}
