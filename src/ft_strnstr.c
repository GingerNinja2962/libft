#include "../headers/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	char *s1;
	char *s2;

	i = 0;
	s1 = (char *)haystack;
	s2 = (char *)needle;
	if (s1[i] == 0)
		return ((char *)haystack);
	while (s1[i] && i < n)
	{
		j = 0;
		while (s1[i + j] == s2[j] && (i + j) < n && s1[i + j] && s2[j])
			j++;
		if (s2[j] == 0)
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}
