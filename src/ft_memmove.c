#include <../headers/libft.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*temp;
	temp = ft_memalloc(n);

	i = 0;
	while (i < n)
	{
		temp[i] = ((char *)src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = temp[i];
		i++;
	}
	return (dest);
}
