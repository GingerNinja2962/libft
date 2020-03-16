#include <../headers/libft.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	ft_memccpy(dest, src, 0, n);
	return (dest);
}
