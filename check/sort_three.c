/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceraval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 14:40:15 by jceraval          #+#    #+#             */
/*   Updated: 2025/08/03 14:40:48 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack *a)
{
	int	first;
	int	second;
	int	third;

	first = a->top->sort;
	second = a->top->next->sort;
	third = a->top->next->next->sort;
	if (first < second && second < third)
		return ;
	else if (first > second && second < third && first < third)
		sa (a);
	else if (first > second && second > third)
	{
		sa (a);
		rra (a);
	}
	else if (first > second && second < third && first > third)
		ra (a);
	else if (first < second && second > third && first < third)
	{
		sa (a);
		ra (a);
	}
	else if (first < second && second > third && first > third)
		rra (a);
}
/* 123  213  321  312  132 231  231 */
