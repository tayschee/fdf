#ifndef FT_DRAW_H
# define FT_DRAW_H

# include "mlx.h"

typedef struct	s_color
{
	char		red;
	char		green;
	char		blue;
	char		opacity;
}				t_color;

typedef struct	s_line
{
	size_t		size;
	float		radiant;
	t_color		color;
};

typedef struct	s_rectangle
{
	size_t		width;
	size_t		height;

}				t_rectangle;

typedef	struct s_square
{
	size_t		side;

}				t_square;

typedef	struct	s_circle
{
	size_t		ray;

}				t_circle;




#endif