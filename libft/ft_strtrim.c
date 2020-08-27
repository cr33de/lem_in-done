#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	int		len;
	char	*new;

	start = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	if (len == 0)
		return (ft_strnew(1));
	end = len - 1;
	while (ft_isspace(s[start]) == 1 && s[start] != '\0')
		start++;
	while (ft_isspace(s[end]) == 1 && end >= start)
		end--;
	len = end - start + 1;
	if (!(new = ft_strnew(len)))
		return (NULL);
	ft_strncpy(new, &s[start], len);
	return (new);
}
