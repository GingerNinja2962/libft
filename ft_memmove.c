#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*temp;
	temp = (char *)malloc((sizeof(char) * (ft_strlen((char *)src))) + 1);

	i = 0;
	while (i < n)
	{
		temp[i] = ((unsigned char *)src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = temp[i];
		i++;
	}
	((unsigned char *)dest)[i] = 0;
	return (dest);
}
