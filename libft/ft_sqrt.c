/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 14:10:22 by vpalyvod          #+#    #+#             */
/*   Updated: 2016/12/15 14:25:04 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define SQRT(x) (x * x)

int	ft_sqrt(int nb)
{
	int	surmise;
	int	low;
	int	high;

	low = 0;
	high = 50000;
	while (1)
	{
		surmise = (high + low) / 2;
		if (SQRT(surmise) > nb)
			high = surmise;
		else if (SQRT(surmise) < nb)
			low = surmise;
		if (SQRT(surmise) == nb)
			return (surmise);
		if ((high - low) <= 1)
			return (0);
	}
}
