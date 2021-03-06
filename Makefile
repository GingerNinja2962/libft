NAME := libft.a

CC := gcc

CFLAGS := -Wall -Werror -Wextra

VPATH := ./src/ ./obj/ ./headers/

H_DIR := ./headers
O_DIR := ./obj/
S_DIR := ./src/

LIST := ft_atoi ft_bzero ft_isalnum ft_isalpha ft_isascii\
	ft_isdigit ft_isprint ft_memalloc ft_memccpy ft_memchr\
	ft_memcmp ft_memcpy ft_memdel ft_memmove ft_memset\
	ft_putchar ft_putstr ft_strcat ft_strchr ft_strclr\
	ft_strcmp ft_strcpy ft_strdel ft_strdup ft_striter\
	ft_strlcat ft_strlen ft_strncat ft_strncmp ft_strncpy\
	ft_strnew ft_strnstr ft_strrchr ft_strstr ft_tolower\
	ft_toupper

OBJ := $(patsubst %,$(O_DIR)%,$(addsuffix .o,$(LIST)))

all: $(O_DIR) $(NAME)

$(O_DIR):
	-mkdir -p $@

$(NAME): $(OBJ)
	ar rcs $@ $(O_DIR)*.o
	ranlib $@
	echo "---[$@ finished]---"

$(O_DIR)%.o: $(S_DIR)%.c
	$(CC) $(CFLAGS) -o $@ -c $< -I$(H_DIR) 
	echo "---[compiled $<]---"

clean:
	-rm -rf	$(O_DIR)
	echo "---[Cleaned]---"

fclean: clean
	-rm -rf $(NAME)
	echo "---[Scrubbed]---"

re: fclean all

.SILENT:

.PHONY: all clean fclean re
