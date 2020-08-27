#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *fresh;

	if (!(fresh = (char*)ft_memalloc(sizeof(char) * (size + 1))))
		return (NULL);
	return (fresh);
}
