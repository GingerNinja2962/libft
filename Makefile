NAME = libft.a

SRCS = *.c

OBJS = *.o

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	/bin/rm -rf $(OBJS)


clean:
	/bin/rm -f $(OBJS)


fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
