#include "ft_mlx.h"

int main()
{
	void	*ptr;
	void	*win;
	t_mlx	*mlx;

	ptr = mlx_init();
	win = t_win_init(ptr, 100, 100, "test");
	mlx = t_mlx_init(ptr, &win);

	mlx_loop(mlx->ptr);

	return 0;
}