/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_walls.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 18:01:56 by vpalyvod          #+#    #+#             */
/*   Updated: 2017/10/24 18:01:57 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

void	check_up_wall(t_mains mains)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (x < mains.width_map)
	{
		if (mains.worldmap[y][x] == 0)
		{
			ft_putstr("The map is invalid!\n");
			exit(1);
		}
		x++;
	}
}

void	check_down_wall(t_mains mains)
{
	int x;
	int y;

	x = 0;
	y = mains.height_map - 1;
	while (x < mains.width_map)
	{
		if (mains.worldmap[y][x] == 0)
		{
			ft_putstr("The map is invalid!\n");
			exit(1);
		}
		x++;
	}
}

void	check_left_wall(t_mains mains)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (y < mains.width_map)
	{
		if (mains.worldmap[y][x] == 0)
		{
			ft_putstr("The map is invalid!\n");
			exit(1);
		}
		y++;
	}
}

void	check_right_wall(t_mains mains)
{
	int x;
	int y;

	x = mains.width_map - 1;
	y = 0;
	while (y < mains.width_map)
	{
		if (mains.worldmap[y][x] == 0)
		{
			ft_putstr("The map is invalid!\n");
			exit(1);
		}
		y++;
	}
}

void	check_walls(t_mains *mains)
{
	check_up_wall(*mains);
	check_down_wall(*mains);
	check_left_wall(*mains);
	check_right_wall(*mains);
}
