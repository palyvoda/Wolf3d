/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 17:19:08 by vpalyvod          #+#    #+#             */
/*   Updated: 2016/12/11 17:20:29 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_strncat(char *str, const char *newst, size_t num)
{
	size_t	i;
	int		str_size;

	i = 0;
	str_size = 0;
	while (str[str_size])
		str_size++;
	while (i < num && newst[i])
	{
		str[str_size] = newst[i];
		str_size++;
		i++;
	}
	str[str_size] = '\0';
	return (str);
}
