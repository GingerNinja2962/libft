#include "./headers/libft.h"
#include <bsd/string.h>
#include <stdio.h>
#include <ctype.h>

int	main(int argc, char **argv)
{
	(void)argc;
	char	*s1;
	char	*s2;
	//int	num;
	void	*pointer1;
	char	*pointer2;

	s1 = ft_memalloc(ft_strlen(argv[1]) + 10);
	s2 = ((unsigned char *)s1)[9];

	bzero(s1, ft_strlen(argv[1] + 10));
	//bzero(s2, ft_strlen(argv[2] + 1));

	ft_strcpy(s1, argv[1]);
	pointer1 = ft_memmove(s1, s2, ft_strlen(argv[1]));
	pointer2 = memmove(s1, s2, ft_strlen(argv[1]));
	//ft_strcpy(s2, argv[2]);

	write(1, "s1:\n	", 5);
	ft_putstr(s1);

	write(1, "\n\ns2:\n	", 7);
	ft_putstr(s2);

	write(1, "\n\npointer1:\n	", 13);
	ft_putstr(pointer1);

	write(1, "\n\npointer2:\n	", 13);
	ft_putstr(pointer2);
	//num = ft_atoi(s1);

	//printf("\nnum = %d\n", num);

	//write(1, "\n\nft_isascii pointer:\n	", 24);
	//ft_tolower(num);
	//printf("\npointer1 = %d\n", pointer1);

	//write (1, "\n\ns1:\n	", 7);
	//ft_putstr(num);

	//write(1, "\n\ns2:\n	", 7);
	//ft_putstr(s2);

	//write(1, "\n\n-----------------------------\n\n", 33);

	//ft_bzero(s1, (ft_strlen(argv[1]) + 1));
	//ft_bzero(s2, (ft_strlen(argv[2]) + 1));

	//ft_strcpy(s1, argv[1]);
	//ft_strcpy(s2, argv[2]);

	//write(1, "s1:\n	", 5);
	//ft_putstr(s1);

	//write(1, "\n\ns2:\n	", 7);
	//ft_putstr(s2);

	//printf("\nnum = %d\n", num);

	//write(1, "\n\nisascii pointer:\n	", 21);
	//pointer2 = tolower(num);
	//printf("\npointer2 = %d\n", pointer2);
	//if (pointer2 < 0)
	//	write(1, "less", 4);
	//if (pointer2 > 0)
	//	write(1, "bigger", 6);
	//if (pointer2 == 0)
	//	write(1, "equal", 5);

	//write (1, "\n\ns1:\n	", 7);
	//ft_putstr(num);

	//write(1, "\n\ns2:\n	", 7);
	//ft_putstr(s2);
	write(1, "\n", 1);
	return (0);
}
