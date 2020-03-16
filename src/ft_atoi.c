#include <../headers/libft.h>

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
	while (ft_isdigit(str[i]) != 0)
	{
		num = (num + (str[i++] - 48));
		if (ft_isdigit(str[i]) != 0)
			num = (num * 10);
	}
	return (num * sign);
}
