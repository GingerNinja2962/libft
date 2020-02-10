#include "libft.h"

int	main(int argc, char *argv[])
{
	(void)argc;
	char	*s1;
	char	*s2;
	char	*pointer;

	s1 = (char *)malloc((sizeof(char) * ft_strlen(argv[1])) + 1);
	s2 = (char *)malloc((sizeof(char) * ft_strlen(argv[1])) - 1);
	
	ft_bzero(s1, (ft_strlen(argv[1])));
	ft_bzero(s2, (ft_strlen(argv[1])));

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

	s1 = (argv[1]);

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
	return (0);
}
