#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *x;
	char *y;

	if (n == 0 || dst == src)
		return (dst);
	x = (char *)dst;
	y = (char *)src;
	while (--n)
		*x++ = *y++;
	*x = *y;
	return (dst);
}
