#include "../headers/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*s1;
	char	*s2;

	if (*needle == 0)
		return ((char *)haystack);
	while (haystack)
	{
		s1 = (char *)haystack;
		s2 = (char *)needle;
		while (*s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
