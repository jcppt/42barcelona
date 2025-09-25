/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juan Ceravalls <jceraval@student.42ba      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 12:18:22 by Juan Cera         #+#    #+#             */
/*   Updated: 2025/08/03 17:15:44 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_stack(t_stack *a, int argc, char **argv)
{
	int		value;
	int		i;
	t_node	*new_node;

	i = 1;
	while (i < argc)
	{
		value = atoi_ps(argv[i]);
		new_node = create_node(value, 0);
		if (!new_node)
		{
			write(2, "Error\n", 6);
			free_stack(a);
			exit(EXIT_FAILURE);
		}
		add_back(a, new_node);
		i++;
	}
	ind_sort(a->top);
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	a.top = NULL;
	a.size = 0;
	b.top = NULL;
	b.size = 0;
	if (argc < 2)
		return (0);
	create_stack(&a, argc, argv);
	if (!is_sorted (&a))
	{
		stack_sort(&a, &b);
	}
	free_stack(&a);
	free_stack(&b);
	return (0);
}
