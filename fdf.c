#include "fdf.h"

int run_fdf(t_map *map)
{
	size_t i = 0;
	t_mlx	img;
	int bpp;
	int size_line;
	int end;
	size_t	pos[2] = {10, 10};


	(void)map;
	void *ptr = mlx_init();
	img.ptr = mlx_new_image(ptr, 50, 50);
	img.data = mlx_get_data_addr(img.ptr, &bpp, &img.size_line, &end);

//	void *sprite_ptr = mlx_new_image(ptr, 50, 50);
//	char *sprite_data = mlx_get_data_addr(img_ptr, &bpp, &size_line, &end);

	//draw_square(&img.data, 0, 0, 40, 40, size_line);
	
	while (i < 10)
	{
		draw_line(&img, pos, 10, 11 * M_PI / 12);
		pos[0]++;
		pos[1]++;
		++i;
	}
	void *win = mlx_new_window(ptr, 50, 50, "test");
	mlx_put_image_to_window(ptr, win, img.ptr, 0, 0);
	mlx_hook()
	(void)win;
	mlx_loop(ptr);
	return 0;
}