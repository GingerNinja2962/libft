#include "../headers/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	ft_memccpy(dest, src, ((char *)src)[1], n);
	return (&((unsigned char *)dest)[0]);
}
