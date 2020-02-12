NAME := libft.a

CC := gcc

CFLAGS := -Wall -Werror -Wextra

H_DIR := headers/

O_DIR := obj/

S_DIR := src/

LIST := ft_bzero ft_memccpy ft_memchr ft_memcmp ft_memcpy ft_memmove\
       ft_memset ft_putchar ft_putstr ft_strcat ft_strchr ft_strcpy\
       ft_strdup ft_strlen ft_strncat ft_strncpy ft_strnstr ft_strrchr\
       ft_strstr ft_strlcat

S_FILE := $(addprefix $(S_DIR),$(addsuffix .c,$(LIST)))

O_FILE := $(addsuffix .o,$(LIST))

all: $(NAME)

$(NAME): $(O_DIR) $(CC)
	echo "  -------[Linking]-------"
	echo ""
	ar rcs $@ $(O_DIR)*.o
	ranlib $@
	echo "  --[$@ finished]--"
	echo ""

$(CC):
	echo " -------[compiling]-------"
	echo ""
	$(CC) $(CFLAGS) -I./$(H_DIR) -c $(S_FILE)
	echo "       --[compiled]--"
	echo ""
	echo "-------[Neatening up]-------"
	echo ""
	-mv $(O_FILE) $(O_DIR)
	echo "       --[Neatened]--"
	echo ""

$(O_DIR):
	-mkdir -p $@

clean:
	echo "  -------[Cleaning]-------"
	echo ""
	-rm -rf	$(O_DIR)
	-rm -rf $(O_FILE)
	echo "       --[Cleaned]--"
	echo ""

fclean: clean
	echo " -------[Scrubbing]-------"
	echo ""
	-rm -rf $(NAME)
	echo "       --[Scrubbed]--"
	echo ""

re: fclean all

.SILENT:

.PHONY: all clean fclean re
