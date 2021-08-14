EXEC = test
LIB = libft_mlx.a

DIR = ./srcs/
SRCS = main.c $(DIR)init_mlx.c $(DIR)draw.c

OBJS = $(SRCS:.c=.o)

CC = gcc -c
CFLAGS = -Iinclude -Iminilibx

all : $(EXEC)

$(EXEC) : $(OBJS)
	make -C minilibx
	gcc -o $(EXEC) $(OBJS) -Lminilibx -lmlx -framework OpenGL -framework AppKit
	#ar rcT $(LIB) $(OBJS) -Lmlx -lmlx -framework OpenGL -framework AppKit -L
	#ranlib $(LIB)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(EXEC)

re : fclean all