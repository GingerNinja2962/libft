#include <libft.h>

void	*memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i] != c)
	{
		dest[i] == src[i];
		i++;
	}
	if (src[i] == c)
		return (dest[++i]);
	return (0);
}
