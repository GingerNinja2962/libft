#include <../headers/libft.h>

void	*ft_memalloc(size_t size)
{
	void	*s1;

	s1 = (void *)malloc(sizeof(void *) * size);
	return (s1);
}
