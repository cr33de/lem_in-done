#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*tmpdst;
	unsigned char	*tmpsrc;
	size_t			i;

	tmpdst = (unsigned char *)dest;
	tmpsrc = (unsigned char *)src;
	i = len;
	if (tmpsrc == NULL && tmpdst == NULL)
		return (NULL);
	if (tmpsrc < tmpdst)
		while (i--)
		{
			tmpdst[i] = tmpsrc[i];
		}
	else
		dest = ft_memcpy(tmpdst, tmpsrc, len);
	return (dest);
}
