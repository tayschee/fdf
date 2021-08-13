#ifndef FT_MLX_H
# define FT_MLX_H

#include <stdlib.h>
#include <mlx.h>

# define ESC 65307
# define TAB 65289

typedef struct	s_mlx
{
	void		*ptr;
	void		*win;
}				t_mlx;

typedef struct	s_img
{
	void		*ptr;
	char		*data;
	int			bpp;
	int			size_line;
	int			endian;
}				t_img;

typedef	struct	s_pos
{
	size_t		x;
	size_t		y;
}				t_pos;

#endif