//#include "fdf.h"
#include "ft_mlx.h"

/*void	draw_line(t_mlx *img, size_t pos[2], size_t dist, float radiant)
{
	//size_t j;
	size_t i = 0;
	size_t pos_in_img;

	while (i < dist)
	{
		printf("cos x : %f\n", i * cosf(radiant));
		printf("sin x : %f\n", i * sinf(radiant));
		printf("x : %d\n", (int)(pos[0] + i * cosf(radiant)));
		printf("y : %d\n", (int)(pos[1] + i * sinf(radiant)));
		pos_in_img = (int)(pos[0] + i * cosf(radiant)) * 4 + (int)(pos[1] + i * sinf(radiant)) * img->size_line;

		//pos_in_img = pos[0] + i * 4 + pos[1] * img->size_line;

		//img->data[pos_in_img + 3] = 255;
		img->data[pos_in_img + 1] = 255;
		img->data[pos_in_img + 2] = 255;
		img->data[pos_in_img] = 255;
		++i;
	}
}*/

t_mlx	*mlx_auto_init(size_t width, size_t height, char *window_name)
{
	t_mlx	*mlx;
	
	mlx = malloc(sizeof(t_mlx));
	if (mlx == NULL)
		return NULL;
	mlx->ptr = mlx_init();
	if (mlx->ptr == NULL)
	{
		free(mlx);
		return NULL;
	}
	mlx->ptr = mlx_init();
	mlx->win = mlx_new_window(mlx->ptr, width, height, window_name);
	if (mlx->win == NULL)
	{
		free(mlx->ptr);
		free(mlx);
		return NULL;
	}
	return mlx;
}