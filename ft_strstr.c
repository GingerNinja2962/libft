#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (j < ft_strlen(needle) && ft_strlen(needle) != 0)
	{
		j = 0;
		while (haystack[i] != needle[j] && haystack[i])
			i++;
		while (haystack[i + j] == needle[j])
			j++;
		if (j == ft_strlen(needle))
			return (haystack);
	}
	if (ft_strlen(needle) == 0)
		return (haystack);
	return (0);
}
