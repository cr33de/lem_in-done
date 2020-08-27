
#include "libft.h"

int		ft_atoi(const char *str)
{
	long	i;
	int		n;

	i = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == 32)
		str++;
	if (*str == '-')
		n = -1;
	else
		n = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && ft_isdigit(*str))
		i = (i * 10) + (*str++ - '0');
	if (i < 0 && n == 1)
		return (-1);
	if (i < 0)
		return (0);
	return (i * n);
}
