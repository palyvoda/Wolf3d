/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 16:38:16 by vpalyvod          #+#    #+#             */
/*   Updated: 2016/12/11 16:55:38 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *str, const char *strcop, size_t num)
{
	size_t	strlen;
	size_t	i;

	i = 0;
	strlen = ft_strlen((char*)strcop);
	while (i < num)
	{
		if (i > strlen)
			str[i] = '\0';
		else
			str[i] = strcop[i];
		i++;
	}
	return (str);
}
