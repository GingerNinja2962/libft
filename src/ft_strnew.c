#include <../headers/libft.h>

char	*ft_strnew(size_t size)
{
	char *s1;

	s1 = ft_memalloc(sizeof(char) * size);
	ft_bzero(s1, size);
	return (s1);
}
