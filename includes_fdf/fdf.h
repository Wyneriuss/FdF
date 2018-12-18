/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fdf.h                                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vasalome <vasalome@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/18 16:10:57 by vasalome     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/18 18:37:23 by vasalome    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "mlx.h"
# include "../libft/includes/libft.h"
# include <math.h>
# include <stdio.h>

typedef	struct	s_point
{
	int			x;
	int			y;
	int			z;
}				t_point;

typedef	struct	s_vars
{
	void		*mlx_ptr;
	void		*win_ptr;
	void		*img_ptr;
	char		*map_name;
	char		*img_string;
	int			bits;
	int			size_line;
	int			endian;
	int			max_p;
	int			*x;
	int			*y;
	int			*z;
	int			img_pos_x;
	int			img_pos_y;
	int			index;
	int			co1;
	int			x1;
	int			y1;
	int			co2;
	int			x2;
	int			y2;
	int			len_line;
	int			zoom;
	int			high;
	int			k;
	int			proj;
	int			rotate;
}				t_vars;

int				false_args();
int				red_cross(int key);
void			make_help(t_vars *all);
void			make_bg2(t_vars *all);
void			make_bg(t_vars *all);
int				make_windows(t_vars *all);
int				move_img(int dir, t_vars *all);
int				get_key(int keycode, t_vars *all);
int				*tab_zero(int *tab);
int				*split_bcl(char **split, int *tab, t_vars *all);
int				malloc_coord(t_vars *all);
int				read_map(t_vars *all);
int				print_pixel(t_vars *all);
int				calc_x(int x, int z, int y, t_vars *all);
int				calc_y(int y, int z, int x, t_vars *all);
int				calc_point(t_vars *all);
int				draw_line(t_vars *all);
int				draw_image(t_vars *all);

#endif
