/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 18:38:55 by vpalyvod          #+#    #+#             */
/*   Updated: 2017/10/24 18:38:57 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF_H
# define WOLF_H
# define BUFF_SIZE 1000
# define X_SIZE_WINDOW 800
# define Y_SIZE_WINDOW 800
# define RED 0xFF0000
# define GREEN 0x1AFF00
# define BLUE 0x0900FF
# define WIGHT 0xFFFFFF
# define YELLOW 0xFFFB00

# include <mlx.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"
# include <stdio.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <unistd.h>

typedef struct	s_mains
{
	double		dir_x;
	double		dir_y;
	double		plane_x;
	double		plane_y;
	double		movespeed;
	double		rotspeed;
	void		*mlx;
	void		*win;
	double		posx;
	double		posy;
	double		olddir_x;
	double		oldplane_x;
	double		camerax;
	double		rayposx;
	double		rayposy;
	double		raydir_x;
	double		raydir_y;
	int			mapx;
	int			mapy;
	double		sidedistx;
	double		sidedisty;
	double		deltadistx;
	double		deltadisty;
	double		perpwalldist;
	int			stepx;
	int			stepy;
	int			hit;
	int			side;
	int			color;
	int			drawstart;
	int			drawend;
	int			**worldmap;
	int			height_map;
	int			width_map;
}				t_mains;

int				get_next_line(int const fd, char **line);
void			print_vision(t_mains mains);
void			verline(int x, int y1, int y2, t_mains *mains);
int				hooks(int keycode, t_mains *mains);
char			**ft_split(char *str);
int				destroy(void);
void			draw_floor(t_mains mains, int h1);
void			build(t_mains *mains, int x, double ww);
void			make_option_values_cont(t_mains *mains);
void			make_option_values(t_mains *mains);
void			init_for_building(t_mains *mains, int x, double ww);
void			check_color_and_draw(t_mains mains, int x,
				int drawstart, int drawend);
void			check_walls(t_mains *mains);
void			ft_strdel_mass(char **mass);
int				count_elem(char **mass);
void			check_player_position(t_mains *mains);
int				points_count(char *filename);
int				read_check_line(char *line, int count);
void			check_correct_map(char *filename, int count, t_mains *mains);

#endif
