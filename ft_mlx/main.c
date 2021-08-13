#include "ft_mlx.h"

int main()
{
	void	*ptr;
	void	*win;

	ptr = mlx_init();
	win	= mlx_new_window(ptr, 100, 100, "title");

	mlx_loop(ptr);
	return 0;
}