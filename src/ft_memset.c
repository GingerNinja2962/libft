#include <../headers/libft.h>

void	*ft_memset(void *str, int c, size_t n)
{
	while (n-- > 0)
		((char *)str)[n] = c;
	return (str);
}
