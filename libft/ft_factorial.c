/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 14:10:47 by vpalyvod          #+#    #+#             */
/*   Updated: 2016/12/15 14:17:42 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_factorial(int num)
{
	int	i;
	int	f;
	int fn;

	i = 1;
	f = 1;
	fn = 1;
	if (num < 0)
		return (0);
	while (i <= num)
	{
		fn = f * i;
		if (fn / i != f)
			return (0);
		i++;
		f = fn;
	}
	return (f);
}
