#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i] != c)
		i++;
	if (src[i] == c)
		return (src[i]);
	return (0);
}
