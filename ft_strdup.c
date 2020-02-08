#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	i;
	char *dup;

	i = ft_strlen(str);
	dup = (char *)malloc((sizeof(char) * i) + 1);
	i = 0;
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}
