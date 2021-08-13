EXEC = fdf
LIB = libft.a

SRCS = main.c parse.c utils.c fdf.c ft_mlx.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -I ./libft -Imlx #-Wall -Werror -Wextra -I ./libft

all : $(EXEC)

$(EXEC) : $(OBJS)
	make -C libft
	gcc -o $(EXEC) $(OBJS) -Lmlx -lmlx -framework OpenGL -framework AppKit -L ./libft/ -lft

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(EXEC)

re : fclean all