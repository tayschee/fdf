#include "fdf.h"

int main(int c, char **v)
{
    t_map *map;
    int fd;

    if (c != 2)
    {
        ft_putstr_fd(2, ARG_NUM_ERROR);
        return 1;
    }
    else
    {
        if ((fd = open(v[1], O_RDONLY)) < 0)
        {
            ft_putstr_fd(2, INVALID_FILE_ERROR);
            return 1;
        }
        parse_fdf(fd, map);
    }
}