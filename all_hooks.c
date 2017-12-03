/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_hooks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 18:02:06 by vpalyvod          #+#    #+#             */
/*   Updated: 2017/10/24 18:02:08 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

void	hook_up(t_mains *mains)
{
	int tmp;
	int posx;
	int posy;

	tmp = mains->posx + mains->dir_x * mains->movespeed;
	posy = mains->posy;
	if (mains->worldmap[tmp][posy] == 0)
		mains->posx += mains->dir_x * mains->movespeed;
	tmp = mains->posy + mains->dir_y * mains->movespeed;
	posx = mains->posx;
	if (mains->worldmap[posx][tmp] == 0)
		mains->posy += mains->dir_y * mains->movespeed;
}

void	hook_down(t_mains *mains)
{
	int tmp;
	int posx;
	int posy;

	tmp = mains->posx - mains->dir_x * mains->movespeed;
	posy = mains->posy;
	if (mains->worldmap[tmp][posy] == 0)
		mains->posx -= mains->dir_x * mains->movespeed;
	tmp = mains->posy - mains->dir_y * mains->movespeed;
	posx = mains->posx;
	if (mains->worldmap[posx][tmp] == 0)
		mains->posy -= mains->dir_y * mains->movespeed;
}

void	hook_right(t_mains *mains)
{
	mains->olddir_x = mains->dir_x;
	mains->dir_x = mains->dir_x * cos(-mains->rotspeed) -
	mains->dir_y * sin(-mains->rotspeed);
	mains->dir_y = mains->olddir_x * sin(-mains->rotspeed) +
	mains->dir_y * cos(-mains->rotspeed);
	mains->oldplane_x = mains->plane_x;
	mains->plane_x = mains->plane_x * cos(-mains->rotspeed) -
	mains->plane_y * sin(-mains->rotspeed);
	mains->plane_y = mains->oldplane_x * sin(-mains->rotspeed) +
	mains->plane_y * cos(-mains->rotspeed);
}

void	hook_left(t_mains *mains)
{
	mains->olddir_x = mains->dir_x;
	mains->dir_x = mains->dir_x * cos(mains->rotspeed) -
	mains->dir_y * sin(mains->rotspeed);
	mains->dir_y = mains->olddir_x * sin(mains->rotspeed) +
	mains->dir_y * cos(mains->rotspeed);
	mains->oldplane_x = mains->plane_x;
	mains->plane_x = mains->plane_x * cos(mains->rotspeed) -
	mains->plane_y * sin(mains->rotspeed);
	mains->plane_y = mains->oldplane_x * sin(mains->rotspeed) +
	mains->plane_y * cos(mains->rotspeed);
}

int		hooks(int keycode, t_mains *mains)
{
	if (keycode == 53)
		exit(0);
	if (keycode == 126)
		hook_up(mains);
	if (keycode == 125)
		hook_down(mains);
	if (keycode == 124)
		hook_right(mains);
	if (keycode == 123)
		hook_left(mains);
	mlx_clear_window(mains->mlx, mains->win);
	print_vision(*mains);
	return (0);
}
