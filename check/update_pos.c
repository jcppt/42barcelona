/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_pos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juan Ceravalls <jceraval@student.42ba      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 13:49:00 by Juan Cera         #+#    #+#             */
/*   Updated: 2025/08/03 14:38:18 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ind_pos(t_stack *a)
{
	int		i;
	t_node	*current;

	if (!a || !a->top)
		return ;
	current = a->top;
	i = 0;
	while (current)
	{
		current->pos = i;
		current = current->next;
		i++;
	}
}

void	ind_rev_pos(t_stack *a)
{
	int		b;
	t_node	*last;

	b = -1;
	if (!a)
		return ;
	last = a->top;
	while (last && last->next)
		last = last->next;
	while (last)
	{
		last->rev_pos = b;
		last = last->prev;
		b--;
	}
}

void	update_pos(t_stack *a, t_stack *b)
{
	ind_pos(a);
	ind_rev_pos(a);
	ind_pos(b);
	ind_rev_pos(b);
}
