#ifndef FT_LIST14_H
# define FT_LIST14_H

# include <stddef.h>

typedef struct	s_list
{
	struct s_list 	*next;
	void		*data;
}			t_list;


#endif;
