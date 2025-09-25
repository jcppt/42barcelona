/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juan Ceravalls <jceraval@student.42ba      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:20:31 by Juan Cera         #+#    #+#             */
/*   Updated: 2025/08/02 15:34:37 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_sort(t_stack *a)
{
	if (a->top->sort > a->top->next->sort)
		sa(a);
}

void	three_sort(t_stack *a)
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
		sa(a);
	else if (first > second && second > third)
	{
		sa(a);
		rra(a);
	}
	else if (first > second && second < third && first > third)
		ra(a);
	else if (first < second && second > third && first < third)
	{
		sa(a);
		ra(a);
	}
	else if (first < second && second > third && first > third)
		rra(a);
}
/* 123  213  321  312  132 231  231 */

void	four_sort(t_stack *a, t_stack *b)
{
	if (is_sorted(a))
		return ;
	arrange(a, 0);
	pb(a, b);
	three_sort(a);
	pa(a, b);
}

void	five_sort(t_stack *a, t_stack *b)
{
	if (is_sorted(a))
		return ;
	is_sorted(a);
	arrange(a, 0);
	pb(a, b);
	arrange(a, 1);
	pb(a, b);
	three_sort(a);
	pa(a, b);
	pa(a, b);
}

void	small_sort(t_stack *a, t_stack *b)
{
	(void)b;
	if (a->size == 1)
		return ;
	if (a->size == 2)
		two_sort(a);
	if (a->size == 3)
		three_sort(a);
	if (a->size == 4)
		four_sort(a, b);
	if (a->size == 5)
		five_sort(a, b);
	if (a->size == 6)
		six_sort (a, b);
}
