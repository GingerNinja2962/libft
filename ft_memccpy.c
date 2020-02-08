#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)dest)[i] == ((unsigned char *)src)[i])
			i++;
		if (((unsigned char *)src)[i - 1] == c)
			return (((unsigned char *)dest)[i]);
	}
	return (0);
}
