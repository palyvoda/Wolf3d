/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   special_funcs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 18:01:31 by vpalyvod          #+#    #+#             */
/*   Updated: 2017/10/24 18:01:33 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

void	ft_strdel_mass(char **mass)
{
	int i;

	i = 0;
	if (mass)
	{
		while (mass[i])
		{
			ft_strdel(&mass[i]);
			i++;
		}
		free(mass);
		mass = NULL;
	}
}

int		count_elem(char **mass)
{
	int i;

	i = 0;
	while (mass[i])
		i++;
	return (i);
}

void	check_player_position(t_mains *mains)
{
	int	posx;
	int	posy;

	posx = mains->posx;
	posy = mains->posy;
	if (mains->worldmap[posx][posy] != 0)
	{
		ft_putstr("Player position is incorrect.\n");
		exit(1);
	}
}

int		points_count(char *filename)
{
	int		fd;
	int		y;
	char	*line;
	int		count;
	int		check;

	check = 0;
	count = 0;
	y = 0;
	fd = open(filename, O_RDONLY);
	while (get_next_line(fd, &line) == 1)
	{
		count = read_check_line(line, count);
		y++;
		free(line);
		check++;
	}
	if (line == NULL || check == 0)
	{
		ft_putstr("The map is empty\n");
		exit(1);
	}
	return (count);
}

int		destroy(void)
{
	exit(1);
}
