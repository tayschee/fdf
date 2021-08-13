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

typedef struct	s_map
{
	enum {
		WIDTH = 0,
		HEIGHT = 1
	};

    int         **tab;
    size_t      dim[2];
}               t_map;

typedef struct	s_mlx
{
	void		*ptr;
	char		*data;
	size_t		widht;
	size_t		height;
	int			size_line;

}				t_mlx;

int 	parse_fdf(int fd, t_map *map);
char *ft_strjoin_with_sep(char *str1, char *str2, char *sep);
size_t	how_many_sep(char *str, char c);
size_t count_number_of(char *txt, char c_search);
int		run_fdf(t_map *map);

void	draw_line(t_mlx *img, size_t pos[2], size_t dist, float radiant);

#endif