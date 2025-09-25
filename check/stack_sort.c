/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juan Ceravalls <jceraval@student.42ba      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 16:42:52 by Juan Cera         #+#    #+#             */
/*   Updated: 2025/08/03 18:13:29 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_sort(t_stack *a, t_stack *b)
{
	int	num_a;
	int	num_b;

	num_a = a->size;
	num_b = b->size;
	if ((num_a <= 0) && (num_b <= 0))
		return ;
	if ((num_a + num_b) <= 6)
		small_sort(a, b);
	else
		large_sort(a, b);
}
