/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   fdf.h                                          .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/11/23 11:35:38 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/11/24 10:25:47 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "../libft/libft.h"
# include "../mlx/mlx.h"

void	draw_line(void *ctx, void *win, t_line line, int color);

typedef struct  s_line
{
	int	x1;
	int y1;
	int x2;
	int	y2;
} t_line;

t_line init_line(int x1, int y1, int x2, int y2);

typedef	struct	s_rbga
{
	int	r;
	int	g;
	int	b;
	int	a;
} t_rgba;

int		rgbatoi(t_rgba rgba);

#endif
