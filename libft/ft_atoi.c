/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 18:32:22 by vpalyvod          #+#    #+#             */
/*   Updated: 2016/12/13 18:42:20 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int num;
	int j;

	num = 0;
	j = 1;
	i = 0;
	while (TAB(str[i]) || TAB2(str[i]))
		i++;
	if (str[i] == '-')
	{
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			j = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (j * num);
}
