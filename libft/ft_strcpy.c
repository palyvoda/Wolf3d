/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 17:30:23 by vpalyvod          #+#    #+#             */
/*   Updated: 2017/05/31 16:38:27 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"

char	*ft_strcpy(char *str, const char *strcop)
{
	int	i;

	i = 0;
	while (strcop[i])
	{
		str[i] = strcop[i];
		i++;
	}
	str[i] = strcop[i];
	return (str);
}
