#ifndef FT_MLX_H
# define FT_MLX_H

# include <stdlib.h>
# include "mlx.h"

# define ESC 65307
# define TAB 65289

typedef	struct	s_pos
{
	size_t		x;
	size_t		y;

}				t_pos;

typedef struct	s_dim
{
	size_t		width;
	size_t		height;

}				t_dim;

typedef struct	s_img
{
	void		*ptr;
	char		*data;
	int			bpp;
	int			size_line;
	int			endian;

}				t_img;

typedef struct	s_win
{
	void		*ptr;
	t_img		img;
	t_dim		dim;

}				t_win;

typedef struct	s_mlx
{
	void		*ptr;
	t_win		**win;

}				t_mlx;


int		new_t_image(t_img *img, void *mlx_ptr, size_t width, size_t height);
t_win	*t_win_init(void *mlx_ptr, size_t width, size_t height, char *title);
t_mlx	*t_mlx_init(void *ptr, void **win);


#endif