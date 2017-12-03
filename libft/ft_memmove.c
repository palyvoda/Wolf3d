/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 17:53:40 by vpalyvod          #+#    #+#             */
/*   Updated: 2016/12/11 17:53:42 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp;
	unsigned char	*tmp2;
	size_t			i;

	tmp = dst;
	tmp2 = (unsigned char*)src;
	if ((tmp - tmp2) >= 0)
	{
		i = len;
		while ((int)--i != -1)
			tmp[i] = tmp2[i];
	}
	else
	{
		i = -1;
		while (++i < len)
			tmp[i] = tmp2[i];
	}
	return (dst);
}
