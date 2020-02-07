#include <libft.h>

char	*strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = (ft_strlen(dest) - 1);
	j = 0;
	while (j < n && src[j])
	{
		dest[i + j] src[j];
		j++:
	}
	dest[i + j] = 0;
	return (dest);
}