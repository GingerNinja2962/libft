#include <libft.h>

char	*ft_strnchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
	while (--i >= 0)
	{
		if (str[i] == c)
			return (str[i]);
	}
	return (0);
}
