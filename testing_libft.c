#include "libft.h"

int	main(int argc, char *argv[])
{
	(void)argc;
	char	*s1;
	char	*s2;
	char	*pointer;
	char	*pointer2;

	s1 = (char *)malloc(sizeof(char) * (ft_strlen(argv[1]) + 4));
	s2 = (char *)malloc(sizeof(char) * (ft_strlen(argv[1]) + 4));

	strcpy(&((char *)s1)[4], argv[1]);
	strcpy(&((char *)s2)[4], &((char *)s1)[4]);

	pointer2 = &((char *)s1)[0];

	write (1, "s1:\n	", 5);
	ft_putstr(s1);

	write(1, "\n\nft_memmove returned pointer:\n	", 32);
	pointer = ft_memmove(pointer2, &((char *)s1)[4], ft_strlen(argv[1]));
	ft_putstr(pointer);

	write (1, "\n\ns1:\n	", 7);
	ft_putstr(s1);

	pointer2 = &((char *)s2)[0];

	write(1, "\n\ns2:\n	", 7);
	ft_putstr(s2);

	write(1, "\n\nmemmove returned pointer:\n	", 29);
	pointer = memmove(pointer2, &((char *)s2)[4], ft_strlen(argv[1]));
	ft_putstr(pointer);

	write (1, "\n\ns2:\n	", 7);
	ft_putstr(s2);

	return (0);
}
