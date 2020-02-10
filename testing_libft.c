#include "libft.h"

int	main(int argc, char *argv[])
{
	(void)argc;
	char	*s1;
	char	*s2;
	char	*pointer;
	//int	num;

	s1 = (char *)malloc(sizeof(char) * (ft_strlen(argv[1]) + 6));
	s2 = (char *)malloc((sizeof(char) * ft_strlen(argv[1])) + 1);
	
	ft_bzero(s1, ft_strlen(argv[1]));
	//ft_bzero(s2, (ft_strlen(argv[1])));

	s1 = (argv[1]);
	strcpy(s2, s1);

	write (1, "s1:\n	", 5);
	ft_putstr(s1);
	write(1, "\n\nft_memmove returned pointer:\n	", 32);
	pointer = ft_memmove(s2, s1, ft_strlen(argv[1]));
	ft_putstr(pointer);
	write (1, "\n\ns1:\n	", 7);
	ft_putstr(s1);

	write(1, "\n\ns2:\n	", 7);
	ft_putstr(s2);
	write(1, "\n\nmemmove returned pointer:\n	", 29);
	pointer = memmove(s1, s2, ft_strlen(argv[1]));
	ft_putstr(pointer);
	write (1, "\n\ns2:\n	", 7);
	ft_putstr(s2);

	/*s2 = (argv[2]);

	pointer = ft_memchr(s1, 65, 3);
	write(1, "ft_memchr:\n	", 12);
	if (pointer == NULL)
		write(1, "segmentation fault (core dumped)", 32);
	else
		ft_putstr(pointer);

	pointer = memchr(s1, 65, 3);
	write(1, "\n\nmemchr:\n	", 11);
	if (pointer == NULL)
		write(1, "segmentation fault (core dumped)", 32);
	else
		ft_putstr(pointer);
	write(1, "\n", 1);

	num = ft_memcmp(s1, s2, ft_strlen(argv[1]));
	write(1, "ft_memcmp:\n	", 12);
	if (num == 0)
		write(1, "same", 4);
	if (num < 0)
		write(1, "less", 4);
	if (num > 0)
		write(1, "greater", 7);

	num = memcmp(s1, s2, ft_strlen(argv[1]));
	write(1, "\n\nmemcmp:\n	", 11);
	if (num == 0)
		write(1, "same", 4);
	if (num < 0)
		write(1, "less", 4);
	if (num > 0)
		write(1, "greater", 7);

	pointer = ft_memset(s1, 65, ft_strlen(argv[1]));
	write(1, "ft_memset (c = 65):\n	", 21);
	ft_putstr(s1);

	write(1, "\n\nreturned pointer:\n	", 21);
	ft_putstr(pointer);

	pointer = memset(s1, 65, ft_strlen(argv[1]));
	write(1, "\n\nmemset (c = 65):\n	", 20);
	ft_putstr(s1);

	write(1, "\n\nreturned pointer:\n	", 21);
	ft_putstr(pointer);

	write(1, "\n\ns1:\n	", 5);
	ft_putstr(s1);

	write(1, "\n\nmemcpy:\n	", 11);
	pointer = memcpy(s2, s1, ft_strlen(argv[1]));
	ft_putstr(s2);

	write(1, "\n\nreturned pointer:\n	", 21);
	ft_putstr(pointer);

	write(1, "\n\nft_memcpy:\n	", 14);
	pointer = ft_memcpy(s2, s1, ft_strlen(argv[1]));
	ft_putstr(s2);

	write(1, "\n\nreturned pointer:\n	", 21);
	ft_putstr(pointer);

	write(1, "\n\nmemccpy (c = 48):\n	", 21);
	pointer = memccpy(s2, s1, 48, ft_strlen(argv[1]));
	ft_putstr(s2);

	write(1, "\n\nreturned pointer:\n	", 21);
	if (pointer == NULL)
		write(1, "segmentation fault (core dumped)", 32);
	else
		ft_putstr(pointer);

	write(1, "\n\nft_memccpy (c = 48):\n	", 24);
	pointer = ft_memccpy(s2, s1, 48, ft_strlen(argv[1]));
	ft_putstr(s2);

	write(1, "\n\nreturned pointer:\n	", 21);
	ft_putstr(pointer);
	write(1, "\n", 1);
	*/
	return (0);
}
