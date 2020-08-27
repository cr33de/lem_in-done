#include "libft.h"

char		*ft_strcat(char *s1, const char *s2)
{
	int i;
	int k;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	k = 0;
	while (s2[k] != '\0')
	{
		s1[i] = s2[k];
		k++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
