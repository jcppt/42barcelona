
#ifndef "LIST_H"
# define "LIST_H"

# "stddef.h"

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

#endif
