#ifndef LIST_H
# define LIST_H

# include <stdlib.h>


typedef struct s_list
{
	int	data;
	struct s_list *next;
} t_list;

int	ascending(int a, int b)

#endif
