/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 14:44:38 by vpalyvod          #+#    #+#             */
/*   Updated: 2016/12/13 20:54:33 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	*ft_memset(void *str, int val, size_t num)
{
	int				i;
	unsigned char	*s;

	s = (unsigned char *)str;
	i = 0;
	while ((size_t)i < num)
		s[i++] = val;
	return (str);
}
