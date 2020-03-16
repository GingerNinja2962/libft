#include <../headers/libft.h>

void	*ft_strcat(char *dest, const char *src)
{
	size_t	j;

	j = 0;
	while (src[j])
	{
		dest[ft_strlen(dest) + j] = src[j];
		j++;
	}
	dest[ft_strlen(dest) + j] = 0;
	return (dest);
}
