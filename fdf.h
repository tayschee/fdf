#ifndef FDF_H
# define FDF_H

# include "libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <mlx.h>
# include <fcntl.h>

#define ARG_NUM_ERROR "Bad number of argument\n"
#define INVALID_FILE_ERROR "Invalid file\n"

typedef struct  s_map
{
    int         **tab;
    int         dim[2];
}               t_map;

int 	parse_fdf(int fd, t_map *map);
char *ft_strjoin_with_sep(char *str1, char *str2, char *sep);
size_t	how_many_sep(char *str, char c);

#endif