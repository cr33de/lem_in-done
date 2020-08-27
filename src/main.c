
#include "../lem_in.h"

int				main(void)
{
	int				*m;
	unsigned char	er;

	er = get_map_info();
	if (er == 1)
		display_error();
	m = (int*)ft_memalloc(sizeof(int) * ml()->count);
	m[0] = ml()->ants;
	if ( roomID(*room_fetch())|| ml()->ants <= 0)
		display_error();
	if (solve_map(ml()->ants, -1, -1, 0))
		display_error();
	ft_putchar('\n');	
	(void)print_results(ml()->ants, m);
	free(m);
	m = NULL;
	return (0);	
}
