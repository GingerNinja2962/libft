#include "../headers/libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((unsigned char *)src)[i] != c)
		i++;
	if (i < n && ((unsigned char *)src)[i] == c)
		return ((char *)(src + i));
	return (NULL);
}
