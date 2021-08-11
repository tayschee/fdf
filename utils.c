/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbigot <tbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:32:00 by tbigot            #+#    #+#             */
/*   Updated: 2021/08/11 18:38:55 by tbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "fdf.h"

char *ft_strjoin_with_sep(char *str1, char *str2, char *sep)
{
	char *final_string;
	char *tmp;

	if (!(tmp = ft_strjoin(str1, sep)))
	{
		return NULL;
	}
	if (!(final_string = ft_strjoin(tmp, str2)))
	{
		free(tmp);
		return NULL;
	}

	return final_string;
}

size_t	how_many_sep(char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	while (str[i])
	{
		++i;
		if (str[i] == c)
			++count;
	}
	return (count);
}

size_t	size_between_sep(char *str, char c)
{
	while ()
}