#include <../headers/libft.h>

void	ft_bzero(void *str, size_t n)
{
	ft_memset((char *)str, 0, n);
}
