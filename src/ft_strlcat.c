#include "../headers/libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(dest);
	while (i < (n - 1) && src[i])
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = 0;
	return (ft_strlen(dest));
}
