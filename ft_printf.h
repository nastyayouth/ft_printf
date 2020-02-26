

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <stdio.h>
#include <stdarg.h>
#include "libft/libft.h"
#include <stdlib.h>

typedef struct      s_printf
{
    char    *comment;
    char    *type_var;
    t_list  *next;
}                   t_printf;

t_printf		ft_find_format(char* str);

#endif