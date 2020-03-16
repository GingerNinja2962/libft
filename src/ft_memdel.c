#include <../headers/libft.h>

void	ft_memdel(void **ap)
{
	if (*ap != 0)
	{
		free(*ap);
		*ap = NULL;
	}
}
