#include "./headers/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_free(void **ap);

int	main(int argc, char **argv)
{
	(void)argc;
	char	**s;

	s = ft_memalloc(sizeof(char *) * 2);
	s[0] = ft_memalloc(sizeof(char) * strlen(argv[1]) + 1);
	s[1] = ft_memalloc(sizeof(char) * strlen(argv[2]) + 1);

	strcpy(s[0], argv[1]);
	strcpy(s[1], argv[2]);

	write(1, "s1: ", 4);
	ft_putstr(s[0]);
	write(1, "\ns2: ", 5);
	ft_putstr(s[1]);

	ft_memdel((void **)s);
	ft_memdel((void **)s+1);

	if (s[0] == NULL)
		write(1, "\nNULL", 5);
	else
	{
		write(1, "\ns1: ", 5);
		ft_putstr(s[0]);
	}
	if (s[1] == NULL)
		write(1, "\nNULL\n", 6);
	else
	{
		write(1, "\ns2: ", 5);
		ft_putstr(s[1]);
		write(1, "\n", 1);
	}
	return (0);
}
