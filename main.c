/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbigot <tbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:32:26 by tbigot            #+#    #+#             */
/*   Updated: 2021/08/11 18:32:26 by tbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int main(int c, char **v)
{
    t_map *map;
    int fd;

	if (!(map  = malloc(sizeof(t_map))))
		return (1);
    if (c != 2)
    {
        ft_putstr_fd(ARG_NUM_ERROR, 2);
        return (1);
    }
    else
    {
        if ((fd = open(v[1], O_RDONLY)) < 0)
        {
            ft_putstr_fd(INVALID_FILE_ERROR, 2);
            return (1);
        }
        parse_fdf(fd, map);
    }
}