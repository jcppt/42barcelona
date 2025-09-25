/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juan Ceravalls <jceraval@student.42ba      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:14:51 by Juan Cera         #+#    #+#             */
/*   Updated: 2025/08/03 17:26:01 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct node
{
	int			content;
	int			sort;
	int			pos;
	int			rev_pos;
	int			head_cost;
	int			cost;
	int			a_stack;
	int			b_stack;
	struct node	*next;
	struct node	*prev;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	t_node	*last;
	int		size;
}	t_stack;

t_node	*create_node(int content, int sort);
t_node	*ind_to_last(t_stack *a);
void	add_back(t_stack *stack, t_node *new_node);
int		atoi_ps(const char *nptr);
void	ind_sort(t_node *a_node);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rr(t_stack *a, t_stack *b);
void	rb(t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);
void	sa(t_stack *a);
void	ss(t_stack *a, t_stack *b);
void	sb(t_stack *b);
void	stack_sort(t_stack *a, t_stack *b);
void	sort_three(t_stack *a);
int		a_position(t_stack *a, int value);
t_node	*find_max_node(t_stack *stack);
void	finalize_sort(t_stack *a);
int		is_sorted(t_stack *a);
void	arrange(t_stack *a, int sort_index);
void	six_sort(t_stack *a, t_stack *b);
void	small_sort_three(t_stack *a);
void	small_sort(t_stack *a, t_stack *b);
void	large_sort(t_stack *a, t_stack *b);
void	update_pos(t_stack *a, t_stack *b);
void	print_forward_and_backward(t_node *top);
void	print_stack(t_node *top);
void	first_push_a_b(t_stack *a, t_stack*b);
void	calc_all_costs(t_stack *a, t_stack *b);
void	calculate_node_cost(t_node *b_nod, t_node *target_a_nod);
int		count_nodes(t_node *a);
void	execute_move(t_stack *a, t_stack *b, t_node *cheapest_node);
t_node	*find_cheapest(t_stack *a);
t_node	*find_target_node_b_to_a(t_node *b_nod, t_stack *a);
void	ind_sort(t_node *a_nod);
void	free_stack(t_stack *a);

#endif
