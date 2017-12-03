/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 18:00:53 by vpalyvod          #+#    #+#             */
/*   Updated: 2017/10/24 18:00:55 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

void	check_color_and_draw(t_mains mains, int x, int drawstart, int drawend)
{
	if ((mains.worldmap[mains.mapx][mains.mapy]) == 1)
		mains.color = RED;
	else if ((mains.worldmap[mains.mapx][mains.mapy]) == 2)
		mains.color = GREEN;
	else if ((mains.worldmap[mains.mapx][mains.mapy]) == 3)
		mains.color = BLUE;
	else if ((mains.worldmap[mains.mapx][mains.mapy]) == 4)
		mains.color = WIGHT;
	else
		mains.color = YELLOW;
	if (mains.side == 1)
	{
		mains.color /= 2;
		if (mains.color == RED / 2)
			mains.color = GREEN / 2;
	}
	else
	{
		if (mains.color == GREEN || mains.color == WIGHT)
			mains.color = BLUE;
	}
	verline(x, drawstart, drawend, &mains);
}

void	init_for_building(t_mains *mains, int x, double ww)
{
	mains->camerax = 2 * x / ww - 1;
	mains->rayposx = mains->posx;
	mains->rayposy = mains->posy;
	mains->raydir_x = mains->dir_x + mains->plane_x * mains->camerax;
	mains->raydir_y = mains->dir_y + mains->plane_y * mains->camerax;
	mains->mapx = mains->rayposx;
	mains->mapy = mains->rayposy;
	mains->deltadistx = sqrt(1 + (mains->raydir_y * mains->raydir_y) /
	(mains->raydir_x * mains->raydir_x));
	mains->deltadisty = sqrt(1 + (mains->raydir_x * mains->raydir_x) /
	(mains->raydir_y * mains->raydir_y));
	mains->hit = 0;
}

void	make_option_values(t_mains *mains)
{
	if (mains->raydir_x < 0)
	{
		mains->stepx = -1;
		mains->sidedistx = (mains->rayposx - mains->mapx)
		* mains->deltadistx;
	}
	else
	{
		mains->stepx = 1;
		mains->sidedistx = (mains->mapx + 1.0 - mains->rayposx)
		* mains->deltadistx;
	}
	if (mains->raydir_y < 0)
	{
		mains->stepy = -1;
		mains->sidedisty = (mains->rayposy - mains->mapy)
		* mains->deltadisty;
	}
	else
	{
		mains->stepy = 1;
		mains->sidedisty = (mains->mapy + 1.0 - mains->rayposy)
		* mains->deltadisty;
	}
}

void	make_option_values_cont(t_mains *mains)
{
	while (mains->hit == 0)
	{
		if (mains->sidedistx < mains->sidedisty)
		{
			mains->sidedistx += mains->deltadistx;
			mains->mapx += mains->stepx;
			mains->side = 0;
		}
		else
		{
			mains->sidedisty += mains->deltadisty;
			mains->mapy += mains->stepy;
			mains->side = 1;
		}
		if (mains->worldmap[mains->mapx][mains->mapy] > 0)
			mains->hit = 1;
	}
	if (mains->side == 0)
		mains->perpwalldist = (mains->mapx - mains->rayposx +
		(1 - mains->stepx) / 2) / mains->raydir_x;
	else
		mains->perpwalldist = (mains->mapy - mains->rayposy +
		(1 - mains->stepy) / 2) / mains->raydir_y;
}
