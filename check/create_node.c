/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juan Ceravalls <jceraval@student.42ba      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 12:33:52 by Juan Cera         #+#    #+#             */
/*   Updated: 2025/08/03 18:03:49 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>
#include <stdlib.h>

t_node	*create_node(int content, int sort)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->content = content;
	node->sort = sort;
	node->pos = 0;
	node->rev_pos = 0;
	node->cost = 0;
	node->a_stack = 0;
	node->b_stack = 0;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}
