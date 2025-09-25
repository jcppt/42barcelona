CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

NAME = push_swap

SRC = push_swap.c \
	add_back.c \
	atoi_ps.c \
	calc_all_costs.c \
	calculate_node_cost.c \
	count_nodes.c \
	create_node.c \
	execute_move.c \
	finalize_sort.c \
	find_cheapest.c \
	find_target_node_b_to_a.c \
	first_push_a_b.c \
	free_stack.c \
	ind_sort.c \
	ind_to_last.c \
	large_sort.c \
	print_forward_backward.c \
	print_stack.c \
	push_a.c \
	push_b.c \
	rotate_a.c \
	rotate_ab.c \
	rotate_b.c \
	rra.c \
	rrb.c \
	rrr.c \
	swap_a.c \
	swap_ab.c \
	swap_b.c \
	small_sort.c \
	small_sort_aux.c \
	sort_three.c \
	stack_sort.c \
	update_pos.c \
	
OBJ = $(SRC:.c=.o)
	
HEADERS = push_swap.h

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

%.o: %.c $(HEADERS) Makefile
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
