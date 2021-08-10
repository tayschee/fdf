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

char    *get_file_in_array(int fd)
{
    int     i;
    char    *line;
    char    *full_line
    char    *tmp;

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

void    get_map_dim(int dim[2])
{
    //:wqle proto est bon
}

int parse_fdf(int fd, t_map *map)
{
    char *array_map;

    if (!(array_map = get_file_in_array(fd)))
    {
        //write something
        return 1;
    }
    map->dim = get_map_dim(array_map);
    pointer_to_map(pointer_map, map);


}