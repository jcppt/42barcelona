#ifndef LIST23_H
# define LIST23_H

# include <stddef.h>

typedef struct t_list
{
	int	val;
	struct t_list *next;
}	t_list;

#endif
