NAME = libft.a

SRCS = *.c

OBJ = *.o

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRCS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)


clean:
	/bin/rm -f $(OBJ)


fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
