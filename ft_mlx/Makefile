LIB = libft_mlx.a

DIR = ./srcs/
SRCS = $(DIR)ft_mlx.c

OBJS = $(SRCS:.c=.o)

CC = gcc -c
CFLAGS = -I ./include -Imlx -Wall -Werror -Wextra

all : $(LIB)

$(LIB) : $(OBJS)
	ar rc $(LIB) $(OBJS)
	ranlib $(LIB)
	#gcc -o $(OBJS) -Lmlx -lmlx -framework OpenGL -framework AppKit -L

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(EXEC)

re : fclean all