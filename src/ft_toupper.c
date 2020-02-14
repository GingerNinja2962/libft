#include <../headers/libft.h>

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		return (c - 32);
	if (c < -1 && c > -129)
		return (256 + c);
	return (c);
}
