#include "../headers/libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '	' || (str[i] > 8 && str[i] < 13))
		i++;
	if (str[i] == '-')
	{
		sign = (sign * -1);
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		num = (num + (str[i++] - 48));
		if (str[i] > 47 && str[i] < 58)
			num = (num * 10);
	}
	return (num * sign);
}
