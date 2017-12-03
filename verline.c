/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verline.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 18:01:19 by vpalyvod          #+#    #+#             */
/*   Updated: 2017/10/24 18:01:21 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

void	verline(int x, int y1, int y2, t_mains *mains)
{
	int y;

	y = y1;
	while (y <= y2)
	{
		mlx_pixel_put(mains->mlx, mains->win, x, y, mains->color);
		y++;
	}
}
