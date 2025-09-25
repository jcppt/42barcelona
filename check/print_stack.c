/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juan Ceravalls <jceraval@student.42ba      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:25:08 by Juan Cera         #+#    #+#             */
/*   Updated: 2025/08/03 15:48:33 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_node *top)
{
	t_node	*current;	

	current = top;
	while (current)
	{
		printf("content: %d\t, sort: %d\t, pos: %d, revpos: %d\t,  cost: %d\t,"
			"a_stack %d\t, b_stack %d\n",
			current->content, current->sort, current->pos, current->rev_pos,
			current->cost, current->a_stack, current->b_stack);
		current = current->next;
	}
	printf("\n");
}
