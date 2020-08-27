#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char cc = (char)c;

	if (!s)
		return (NULL);
	while (*s && *s != cc)
		++s;
	if (*s == cc)
		return ((char *)s);
	return (NULL);
}
