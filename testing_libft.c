#include "libft.h"

int	main(int argc, char *argv[])
{
	(void)argc;
	char	*s1;

	s1 = (char *)malloc((sizeof(char) * ft_strlen(argv[1])) + 1);
	ft_bzero(s1, (ft_strlen(argv[1])));
	s1 = argv[1];
	write(1, "s1 = ", 5);
	ft_putstr(s1);
	
	write(1, "\nft_memchr = ", 13);
	if (ft_memchr(s1, 65, 5) == NULL)
		write(1, "NULL", 4);
	else
		ft_putstr(ft_memchr(s1, 65, 5));
	write(1, "\n", 1);
	
	write(1, "\nmemccpy = ", 11);
	if (memchr(s1, 65, 5) == NULL)
		write(1, "NULL", 4);
	else
		ft_putstr(memchr(s1, 65, 5));
	write(1, "\n", 1);
	
	return (0);
}
