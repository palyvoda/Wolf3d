/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 17:05:47 by vpalyvod          #+#    #+#             */
/*   Updated: 2016/12/11 17:06:59 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

size_t	ft_strlcat(char *str1, const char *str2, size_t size)
{
	unsigned int	i;
	unsigned int	str1_size;
	unsigned int	str2_size;

	i = 0;
	while (str1[i] != '\0')
		i++;
	str1_size = i;
	i = 0;
	while (str2[i] != '\0')
		i++;
	str2_size = i;
	i = 0;
	while (str2[i] != '\0' && ((str1_size + i) < (size - 1)))
	{
		str1[str1_size + i] = str2[i];
		i++;
	}
	str1[str1_size + i] = '\0';
	return (str2_size + ((str1_size < size) ? str1_size : size));
}
