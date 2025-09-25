/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort_aux.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juan Ceravalls <jceraval@student.42ba      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 16:16:41 by Juan Cera         #+#    #+#             */
/*   Updated: 2025/08/04 10:25:00 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	a_position(t_stack *a, int value)
{
	int		i;
	t_node	*current;

	current = a->top;
	i = 0;
	while (current)
	{
		if (current->sort == value)
			return (i);
		current = current->next;
		i++;
	}
	return (0);
}

int	is_sorted(t_stack *a)
{
	t_node	*current;

	current = a->top;
	while (current && current->next)
	{
		if (current->sort + 1 != current->next->sort)
			return (0);
		current = current->next;
	}
	return (1);
}

void	arrange(t_stack *a, int sort_index)
{
	int	pos;
	int	size;
	int	i;

	pos = a_position(a, sort_index);
	size = a->size;
	i = size - pos;
	if (pos <= size / 2)
	{
		while (pos-- > 0)
			ra (a);
	}
	else
	{
		while (i-- > 0)
			rra (a);
	}
}

void	six_sort(t_stack *a, t_stack *b)
{
	if (is_sorted(a))
		return ;
	arrange(a, 0);
	pb (a, b);
	arrange(a, 1);
	pb (a, b);
	arrange (a, 2);
	pb (a, b);
	sort_three (a);
	pa (a, b);
	pa (a, b);
	pa (a, b);
}
