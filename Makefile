EXEC = fdf
LIB = libft.a

SRCS = main.c parse.c utils.c

OBJS = ${SRCS:.c=.o}

CC = gcc
CFLAGS = -Wall -Werror -Wextra -I ./libft

all : $(OBJS)
	make -C libft
	gcc -o $(EXEC) $(OBJS) -I $(LIB)

$(EXEC) : all

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(EXEC)

re : fclean all