/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbigot <tbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:32:11 by tbigot            #+#    #+#             */
/*   Updated: 2021/08/12 17:57:19 by tbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static char	*get_file_in_array(int fd, char sep)
{
	int	 	i;
	char	*line;
	char	*full_line;
	char	*tmp;

	tmp = NULL;
	line = NULL;
	full_line = NULL;
	while ((i = get_next_line(fd, &line)) > 0)
	{
		tmp = full_line;
		if (!(full_line = ft_strjoin_with_sep(tmp, line, &sep)))
		{
			return NULL;
		}
		free(line);
		free(tmp);
	}
	if (i == -1)
	{
		free(full_line);
		return NULL;
	}
	return full_line;
}

static int		**alloc_2d_int(size_t x, size_t y)
{
	size_t i;
	int **map;

	i = 0;
	if (!(map = malloc(sizeof(int *) * y)))
		return NULL;
	while (i < y)
	{	
		if (!(map[i] = malloc(sizeof(int) * x)))
		{
			//free
			return NULL;
		}
		++i;
	}
	return map;
}

static size_t get_line_width(char *line)
{
	return count_number_of(line, ' ') + 1;
}

static int init_dim_map(char **array_splited, size_t map[2])
{
	size_t i;

	i = 0;
	if (array_splited != NULL)
		map[0] = get_line_width(array_splited[i]);
	while (array_splited[++i])
	{
		if (map[0] != get_line_width(array_splited[i]))
			return 1;
	}
	map[1] = i;
	return 0;
}

int	copy_2d_char_in_2d_int(char **char_2d, int **int_2d)
{
	size_t i;
	size_t j;
	char **line_map;

	i = 0;
	while (char_2d[i])
	{
		line_map = ft_split(char_2d[i], ' ');
		if (line_map == NULL)
			return 1;

		j = 0;
		while (line_map[j])
		{
			int_2d[i][j] = ft_atoi(line_map[j]);
			++j;
		}
		++i;
	}
	return 0;
}

/*static void	print_2d_char(char **txt)
{
	size_t i;

	i = 0;
	while (txt[i])
	{
		printf("%s\n", txt[i]);
		++i;
	}
}*/

int parse_fdf(int fd, t_map *map)
{
	(void)map;
	char *array_map;
	char **array_splitted;

	if (!(array_map = get_file_in_array(fd, '/')))
	{
		//write something
		return (1);
	}
	array_splitted = ft_split(array_map, '/');
	free(array_map);
	if (array_splitted == NULL)
		return 1;
	//print_2d_char(array_splitted);
	if (init_dim_map(array_splitted, map->dim))
	{
		free(array_map);
		return 1;
	}
	map->tab = alloc_2d_int(map->dim[WIDTH], map->dim[HEIGHT]);
	if (map->tab == NULL)
	{
		//free
		return 1;
	}
	if (copy_2d_char_in_2d_int(array_splitted, map->tab))
	{
		//free
		//free
		return 1;
	}
	return (0);
}