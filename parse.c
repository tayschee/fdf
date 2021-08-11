/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbigot <tbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:32:11 by tbigot            #+#    #+#             */
/*   Updated: 2021/08/11 18:38:20 by tbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static char	*get_file_in_array(int fd)
{
	int	 i;
	char	*line;
	char	*full_line;
	char	*tmp;

	while ((i = get_next_line(fd, &line)) > 0)
	{
		tmp = full_line;
		if (!(full_line = ft_strjoin_with_sep(tmp, line, "/")))
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

static void	get_map_dim(char *array_map, int dim[2])
{
	dim[0] = how_many_sep(array_map, "/");
	dim[1] = size_between_sep(array_map, "/");
}

int parse_fdf(int fd, t_map *map)
{
	(void)map;
	char *array_map;

	if (!(array_map = get_file_in_array(fd)))
	{
		//write something
		return (1);
	}
	get_map_dim(array_map, map->dim);
	//pointer_to_map(pointer_map, map);
	return (0);

}