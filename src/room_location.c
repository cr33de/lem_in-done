#include "../lem_in.h"

t_list	*room_location(t_list *room, char *name, unsigned char nxt_room)
{
	char		*locate_room;

	locate_room = (nxt_room) ? ft_strsub(name, 0, nxt_room) : ft_strdup(name);
	while (room != NULL)
	{
		if (!ft_strcmp(room->content, locate_room))
		{
			ft_strdel(&locate_room);
			return (room);
		}
		room = room->next;
	}
	ft_strdel(&locate_room);
	return (NULL);
}
