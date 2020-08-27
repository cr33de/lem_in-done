#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*t;
	int			i;

	i = 0;
	t = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			t = s + i;
		i++;
	}
	if (s[i] == c)
		return ((char *)(s + i));
	return ((char *)t);
}
