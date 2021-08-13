/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbigot <tbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:32:00 by tbigot            #+#    #+#             */
/*   Updated: 2021/08/12 17:40:23 by tbigot           ###   ########.fr       */
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

size_t count_number_of(char *txt, char c_search)
{
	size_t count;
	size_t i;

	i = 0;
	count = 0;
	while (txt[i])
	{
		if (c_search == txt[i])
			++count;
		++i;
	}
	return count;
}