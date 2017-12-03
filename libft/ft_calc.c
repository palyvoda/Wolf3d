/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 14:35:59 by vpalyvod          #+#    #+#             */
/*   Updated: 2016/12/15 14:48:32 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_calc(float n1, char i, float n2)
{
	if (i == '+')
		return (n1 + n2);
	else if (i == '-')
		return (n1 - n2);
	else if (i == '*')
		return (n1 * n2);
	else if (i == '/')
		return (n1 / n2);
	return (0);
}
