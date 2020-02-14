#include "./headers/libft.h"
#include <bsd/string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	char	*s1;
	char	*s2;
	int	pointer1;
	int	pointer2;

	s1 = (char *)malloc(sizeof(char) * (ft_strlen(argv[1]) + 1));
	s2 = (char *)malloc(sizeof(char) * (ft_strlen(argv[2]) + 1));

	bzero(s1, ft_strlen(argv[1] + 1));
	bzero(s2, ft_strlen(argv[2] + 1));

	ft_strcpy(s1, argv[1]);
	ft_strcpy(s2, argv[2]);

	write(1, "s1:\n	", 5);
	ft_putstr(s1);

	write(1, "\n\ns2:\n	", 7);
	ft_putstr(s2);

	write(1, "\n\nft_strncmp pointer (n = 13):\n	", 33);
	pointer1 = ft_strcmp(s2, s1);
	if (pointer1 < 0)
		write(1, "less", 4);
	if (pointer1 > 0)
		write(1, "bigger", 6);
	if (pointer1 == 0)
		write(1, "equal", 5);

	write (1, "\n\ns1:\n	", 7);
	ft_putstr(s1);

	write(1, "\n\ns2:\n	", 7);
	ft_putstr(s2);

	write(1, "\n\n-----------------------------\n\n", 33);

	ft_bzero(s1, (ft_strlen(argv[1]) + 1));
	ft_bzero(s2, (ft_strlen(argv[2]) + 1));

	ft_strcpy(s1, argv[1]);
	ft_strcpy(s2, argv[2]);

	write(1, "s1:\n	", 5);
	ft_putstr(s1);

	write(1, "\n\ns2:\n	", 7);
	ft_putstr(s2);

	write(1, "\n\nstrncmp pointer (n = 13):\n	", 29);
	pointer2 = strcmp(s2, s1);
	if (pointer2 < 0)
		write(1, "less", 4);
	if (pointer2 > 0)
		write(1, "bigger", 6);
	if (pointer2 == 0)
		write(1, "equal", 5);

	write (1, "\n\ns1:\n	", 7);
	ft_putstr(s1);

	write(1, "\n\ns2:\n	", 7);
	ft_putstr(s2);
	write(1, "\n", 1);
	return (0);
}
