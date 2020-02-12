#include "./headers/libft.h"

int	main(int argc, char **argv)
{
	(void)argc;
	char	*s1;
	char	*s2;
	char	*hold1;
	char	*hold2;
	char	*pointer1;
	char	*pointer2;

	s1 = (char *)malloc(sizeof(char) * (ft_strlen(argv[1]) + 1));
	s2 = (char *)malloc(sizeof(char) * (ft_strlen(argv[1]) + ft_strlen(argv[2]) + 1));
	hold1 = (char *)malloc(sizeof(char) * (ft_strlen(argv[1]) + 1));
	hold2 = (char *)malloc(sizeof(char) * (ft_strlen(argv[2]) + 1));

	ft_strcpy(hold1, argv[1]);
	ft_strcpy(hold2, argv[2]);
	ft_strcpy(s1, hold1);
	ft_strcpy(s2, hold2);

	write(1, "s1:\n	", 5);
	ft_putstr(s1);

	write(1, "\n\ns2:\n	", 7);
	ft_putstr(s2);

	write(1, "\n\nft_strncat pointer (n = 9):\n	", 31);
	pointer1 = ft_strncat(s2, s1, 9);
	ft_putstr(pointer1);

	write (1, "\n\ns1:\n	", 7);
	ft_putstr(s1);

	write(1, "\n\ns2:\n	", 7);
	ft_putstr(s2);

	write(1, "\n\n--------------------------------------", 40);

	ft_bzero(s1, (ft_strlen(hold1) + 1));
	ft_bzero(s2, (ft_strlen(hold1) + ft_strlen(hold2) + 1));

	ft_strcpy(s1, hold1);
	ft_strcpy(s2, hold2);

	write(1, "s1:\n	", 5);
	ft_putstr(s1);

	write(1, "\n\ns2:\n	", 7);
	ft_putstr(s2);

	write(1, "\n\nstrncat pointer (n = 9):\n	", 28);
	pointer2 = strncat(s2, s1, 9);
	ft_putstr(pointer2);

	write (1, "\n\ns1:\n	", 7);
	ft_putstr(s1);

	write(1, "\n\ns2:\n	", 7);
	ft_putstr(s2);

	write(1, "\n", 1);

	return (0);
}
