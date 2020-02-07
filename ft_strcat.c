#include <libft.h>

void	*ft_strcat(char *dest, const char *src)
{
	size_t	i;
	size_t	j;

	i = (ft_strlen(dest) - 1);
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}
