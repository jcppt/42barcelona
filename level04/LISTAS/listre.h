#ifndef LISTRE_H
# define LISTRE_H

# include <stdlib.h>


typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

#endif
