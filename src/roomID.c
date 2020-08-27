#include "../lem_in.h"

unsigned char	roomID(t_list *list)
{
	t_list	*man;

	while (list != NULL)
	{
		man = list->next;
		while (man != NULL)
		{
			if (man->content_size == list->content_size
				|| !ft_strcmp(man->content, list->content))
				return (1);
			man = man->next;
		}
		list = list->next;
	}
	return (0);
}
