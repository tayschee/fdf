//#include "fdf.h"
#include "ft_mlx.h"

t_mlx	*t_mlx_init(void *ptr, void **win)
{
	t_mlx *mlx;

	mlx = malloc(sizeof(t_mlx));
	if (!mlx)
		return NULL;
	else
	{
		mlx->ptr = ptr;
		mlx->win = (t_win**)win;
	}
	return mlx;
}

t_win	*t_win_init(void *mlx_ptr, size_t width, size_t height, char *title)
{
	t_win	*win;
	t_img	img;

	win = malloc(sizeof(t_win));
	if (win == NULL)
		return NULL;
	win->ptr = mlx_new_window(mlx_ptr, width, height, title);
	win->dim.width = width;
	win->dim.height = height;
	if (new_t_image(&img, mlx_ptr, width, height))
	{
		mlx_destroy_window(mlx_ptr, win->ptr);
		free(win);
		win = NULL;
	}

	return win;
}

int	new_t_image(t_img *img, void *mlx_ptr, size_t width, size_t height)
{
	img->ptr = mlx_new_image(mlx_ptr, width, height);
	if (!img->ptr)
		return 1;
	img->data = mlx_get_data_addr(img->ptr, &img->bpp, &img->size_line, &img->endian);
	if (!img->data)
	{
		mlx_destroy_image(mlx_ptr, img->ptr);
		return 1;
	}
	return 0;
}