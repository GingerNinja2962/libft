#include <../headers/libft.h>

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(dest);
	while ((i + j + 1) < n && src[i])
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = 0;
	if (ft_strlen(dest) > n) 
		return (n + ft_strlen(src));
	return (j + ft_strlen(src));
}
