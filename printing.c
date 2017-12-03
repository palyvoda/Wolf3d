/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 18:00:59 by vpalyvod          #+#    #+#             */
/*   Updated: 2017/10/24 18:01:00 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

void	build(t_mains *mains, int x, double ww)
{
	int lineheight;

	init_for_building(mains, x, ww);
	make_option_values(mains);
	make_option_values_cont(mains);
	lineheight = (Y_SIZE_WINDOW / mains->perpwalldist);
	mains->drawstart = -lineheight / 2 + Y_SIZE_WINDOW / 2;
	if (mains->drawstart < 0)
		mains->drawstart = 0;
	mains->drawend = lineheight / 2 + Y_SIZE_WINDOW / 2;
	if (mains->drawend >= Y_SIZE_WINDOW)
		mains->drawend = Y_SIZE_WINDOW - 1;
	check_color_and_draw(*mains, x, mains->drawstart, mains->drawend);
}

void	draw_ceiling(t_mains mains, int h1)
{
	int w1;

	while (h1 < Y_SIZE_WINDOW / 2)
	{
		w1 = 0;
		while (w1 < X_SIZE_WINDOW)
		{
			mlx_pixel_put(mains.mlx, mains.win, w1, h1, 0x0F0000);
			w1++;
		}
		h1++;
	}
}

void	draw_floor(t_mains mains, int h1)
{
	int w1;

	while (h1 < Y_SIZE_WINDOW)
	{
		w1 = 0;
		while (w1 < X_SIZE_WINDOW)
		{
			mlx_pixel_put(mains.mlx, mains.win, w1, h1, 0x1C0A2B);
			w1++;
		}
		h1++;
	}
}

void	print_vision(t_mains mains)
{
	int		x;
	double	ww;
	int		h1;

	ww = X_SIZE_WINDOW;
	h1 = Y_SIZE_WINDOW / 2;
	draw_floor(mains, h1);
	x = 0;
	while (x < X_SIZE_WINDOW)
	{
		build(&mains, x, ww);
		x++;
	}
}
