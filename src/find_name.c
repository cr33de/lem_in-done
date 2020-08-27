#include "../lem_in.h"

t_list	*ft_find_name(t_list *room, size_t i)
{
	while (room != NULL)
	{
		if (room->content_size == i)
			return (room);
		room = room->next;
	}
	return (NULL);
}
