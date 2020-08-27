#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!s1 || !s2)
		return (NULL);
	if (!(fresh = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	fresh = ft_strcpy(fresh, s1);
	fresh = ft_strcat(fresh, s2);
	return (fresh);
}
