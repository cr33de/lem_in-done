
#include "../lem_in.h"
#include <limits.h>


static int		find_shortest_path(int dist[], int visited[])
{
	int				min_dist;
	int				min_index;
	unsigned int	v_index;

	min_dist = INT_MAX;
	v_index = 0; 
	while (ml()->count > v_index)
	{
		if (!visited[v_index] && dist[v_index] <= min_dist)
		{
			min_dist = dist[v_index];
			min_index = v_index;
		}
		v_index++;
	}
	return (min_index); 
}


static unsigned char	ft_initialise_solver(int (*dist)[], int (*visited)[], int (*source)[])
{
	unsigned int	i;

	i = 0;
	while (ml()->count > i)
	{
		(*dist)[i] = INT_MAX;
		(*visited)[i] = 0;
		(*source)[0] = -1;
		i++;
	}
	(*dist)[0] = 0;
	return (0);
}


int				solve_map(int ants, unsigned int x, unsigned int v_index, int s_path)
{
	int				visited[ml()->count];
	int				source[ml()->count];
	int				dist[ml()->count];

	(void)ft_initialise_solver(&dist, &visited, &source);
	while (++x < ml()->count - 1)
	{
		v_index = -1;
		s_path = find_shortest_path(dist, visited);
		visited[s_path] = 1; 
		while (++v_index < ml()->count)
			if (!visited[v_index] && (*get_path())[s_path][v_index] && dist[s_path] != INT_MAX
							&& dist[s_path] + (*get_path())[s_path][v_index] < dist[v_index])
			{
				source[v_index] = s_path; 
				dist[v_index] = dist[s_path] + (*get_path())[s_path][v_index]; 
			}
	}
	if (ml()->dist < dist[ml()->count - 1]
						|| dist[ml()->count - 1] == INT_MAX)
		return (ml()->dist == INT_MAX);
	ml()->dist = dist[ml()->count - 1];
	ft_lstadd(get_result(), ft_lstnew(source, sizeof(source))); 
	(void)ft_remove_path((*get_result())->content);
	return (solve_map(ants, -1, -1, 0));
}
