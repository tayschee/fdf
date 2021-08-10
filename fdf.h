#ifndef FDF_H
# define FDF_H

# include "libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <mlx.h>

#define ARG_NUM_ERROR "Bad number of argument\n"
#define INVALID_FILE_ERROR "Invalid file\n"

typedef struct  s_map
{
    int         **tab;
    int         dim[2];
}               t_map;

#endif