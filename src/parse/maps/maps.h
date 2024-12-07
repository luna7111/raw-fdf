/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   maps.h                                         .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/12/01 11:31:18 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/12/08 16:43:07 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_map
{
	int		width;
	int		height;
	int		**h_grid;
	t_rgba	**c_grid;
}	t_map;

void	parse_point(t_map *map, char *raw_point, int x, int y);
void	parse_line(t_map *map, char *line, int y);
void	parse_map(t_map *map, int fd);

int		get_map_width(char **map);
int		get_map_height(char **map);
