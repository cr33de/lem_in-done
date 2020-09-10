

#include "libft.h"

size_t	ft_strclen(const char *s, const char c)
{
	size_t		cntr;
	t_uchar		ch;

	cntr = 0;
	ch = (t_uchar)c;
	if (!s)
		return (cntr);
	while (s[cntr] && s[cntr] != ch)
		++cntr;
	return (cntr);
}
