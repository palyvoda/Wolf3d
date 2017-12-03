/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 18:01:41 by vpalyvod          #+#    #+#             */
/*   Updated: 2017/10/24 18:01:43 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

void	make_worldmap(t_mains *mains, int count)
{
	int		fd;
	char	*line;
	char	**mass;
	int		x;
	int		y;

	mains->worldmap = (int **)malloc(sizeof(int) * count + 1);
	x = 0;
	fd = open("map.wolf", O_RDONLY);
	y = 0;
	while (get_next_line(fd, &line) == 1)
	{
		mass = ft_split(line);
		x = 0;
		mains->worldmap[y] = (int *)malloc(sizeof(int) * count_elem(mass));
		while (mass[x])
		{
			mains->worldmap[y][x] = ft_atoi(mass[x]);
			x++;
		}
		ft_strdel_mass(mass);
		free(line);
		y++;
	}
}

void	mains_init(t_mains *mains)
{
	mains->posy = 2;
	mains->posx = 7;
	mains->dir_x = -1;
	mains->dir_y = 0;
	mains->plane_x = 0;
	mains->plane_y = 0.66;
	mains->movespeed = 0.5;
	mains->rotspeed = 0.16;
}

int		read_check_line(char *line, int count)
{
	char	**word;
	int		x;
	int		i;

	i = 0;
	x = 0;
	word = ft_split(line);
	while (word[x])
	{
		i = -1;
		while (word[x][++i])
		{
			if (!ft_isdigit(word[x][i]) && word[x][i])
			{
				ft_putstr("The map is invalid\n");
				exit(1);
			}
		}
		count++;
		x++;
	}
	ft_strdel_mass(word);
	return (count);
}

void	check_correct_input(char *filename, int argc)
{
	if (open(filename, O_RDONLY) < 0)
	{
		ft_putstr("No such file or directory.\n");
		exit(1);
	}
	if (argc > 1)
	{
		ft_putstr("Write \"./wolf3d\" and press enter\n");
		exit(1);
	}
}

int		main(int argc, char **argv)
{
	char	**ar;
	t_mains	mains;
	int		count;
	char	*filename;

	ar = argv;
	count = 0;
	filename = ft_strdup("map.wolf");
	check_correct_input(filename, argc);
	check_correct_map(filename, count, &mains);
	mains_init(&mains);
	mains.mlx = mlx_init();
	mains.win = mlx_new_window(mains.mlx, Y_SIZE_WINDOW,
	X_SIZE_WINDOW, "Wolf3d");
	count = points_count(filename);
	make_worldmap(&mains, count);
	check_player_position(&mains);
	check_walls(&mains);
	print_vision(mains);
	free(filename);
	mlx_hook(mains.win, 17, 0, destroy, 0);
	mlx_hook(mains.win, 2, 5, hooks, &mains);
	mlx_loop(mains.mlx);
}
