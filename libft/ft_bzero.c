/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 14:47:39 by vpalyvod          #+#    #+#             */
/*   Updated: 2016/12/13 20:53:14 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"

void	*ft_bzero(void *str, size_t num)
{
	int				i;
	unsigned char	*s;

	s = (unsigned char *)str;
	i = 0;
	while ((size_t)i < num)
		s[i++] = '\0';
	return (str);
}
