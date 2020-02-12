#include "../headers/libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
	while (i-- > 0)
	{
		if (str[i] == c)
			return ((char *)str + i);
	}
	return (0);
}
