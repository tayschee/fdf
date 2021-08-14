#include "mlx.h"

void	draw_line(t_img *img, t_pos pos, size_t dist, float radiant)
{
	size_t i = 0;
	size_t pos_in_img;

	while (i < dist)
	{
		pos_in_img = (int)(pos.x + i * cosf(radiant)) * 4 + (int)(pos.y + i * sinf(radiant)) * img->size_line;

		//pos_in_img = pos[0] + i * 4 + pos[1] * img->size_line;

		//img->data[pos_in_img + 3] = 255;
		img->data[pos_in_img + 1] = 255;
		img->data[pos_in_img + 2] = 255;
		img->data[pos_in_img] = 255;
		++i;
	}
}