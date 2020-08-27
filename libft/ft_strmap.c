#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	int		i;
	int		len;
	char	*new;

	if (s == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	if (!(new = ft_strnew(len)))
		return (NULL);
	while (i < len)
	{
		new[i] = f(s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
