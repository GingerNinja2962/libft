#include <../headers/libft.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[(i + 1)] || s2[(i + 1)]))
		i++;
	return (s1[i] - s2[i]);
}
