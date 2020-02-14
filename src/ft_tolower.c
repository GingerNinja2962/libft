#include <../headers/libft.h>

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		return (c + 32);
	if (c < -1 && c > -129)
		return (256 + c);
	return (c);
}
