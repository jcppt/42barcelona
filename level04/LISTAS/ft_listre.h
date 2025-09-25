#ifndef LIST_RE_H
# define LIST_RE_H

# include <stddef.h>

typedef	struct s_list
{
	struct s_list 	*next;
	void			*data;
}				t_list

#endif
