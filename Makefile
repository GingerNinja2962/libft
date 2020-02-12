NAME := libft.a

CC := gcc

CFLAGS := -Wall -Werror -Wextra

H_DIR := headers/

O_DIR := obj/

S_DIR := src/

LIST := ft_bzero ft_memccpy ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset ft_putchar ft_putstr ft_strcat ft_strchr ft_strcpy ft_strdup\
	ft_strlen ft_strncat ft_strncpy ft_strnstr ft_strrchr ft_strstr

S_FILE := $(addprefix $(S_DIR),$(addsuffix .c,$(LIST)))

O_FILE := $(addsuffix .o,$(LIST))

all: $(NAME)

$(NAME): $(CC) $(O_DIR)
	echo "  -------[Linking]-------"
	ar rc $@ $(O_DIR)*.o
	ranlib $@
	echo "  --[$@ finished]--"

$(CC):
	echo " -------[compiling]-------"
	$@ $(CFLAGS) -I./$(H_DIR) -c $(S_FILE)
	echo "       --[compiled]--"

$(O_DIR):
	echo "-------[Neatening up]-------"
	-mkdir -p $@
	-mv $(O_FILE) $(O_DIR)
	echo "       --[Neatened]--"

clean:
	echo "  -------[Cleaning]-------"
	-rm -rf	$(O_DIR)
	-rm -rf $(O_FILE)
	echo "       --[Cleaned]--"

fclean: clean
	echo " -------[Scrubbing]-------"
	rm -rf $(NAME)
	echo "       --[Scrubbed]--"

re: fclean all

.SILENT:

.PHONY: all clean fclean re
