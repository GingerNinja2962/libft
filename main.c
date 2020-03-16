#include "./headers/libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void)argc;
	int	n;
	char	str1[100];
	char	*str2;
	char	str3[100];
	char	*str4;
	char	*temp;

	n = ft_atoi(argv[2]);

	ft_memset(str1, 65, 100);
	ft_memset(str3, 65, 100);

	temp = ft_memalloc(sizeof(char) * ft_strlen(argv[1]));
	ft_strcpy(temp, ((char *)argv[1]));

	str4 = &str3[n];
	str2 = &str1[n];

	printf("testing ft_memset = %s\n%s\n\n", str1, str3);

	strcpy(str1, temp);
	ft_strcpy(str3, temp);

	printf("str1 (bofore memove)    = %s\nstr3 (before ft_memove) = %s\n\n", str1, str3);

	ft_memmove(str2, (const void *)str1, n);
	ft_memmove(str4, (const void *)str3, n);

	printf("str1 (after memmove)    = %s\nstr3 (after ft_memove)  = %s\n\n", str1, str3);

	return (0);
}
