#ifndef LIST_H
# define LIST_H

# include <stddef.h>

typedef struct	s_list
{
	int	val;
	t_list *next;
}	t_list;
#endif
