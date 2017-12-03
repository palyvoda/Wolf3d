/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 17:40:03 by vpalyvod          #+#    #+#             */
/*   Updated: 2016/12/11 17:41:39 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*ret;

	if (!s)
		return (0);
	ret = ft_memalloc(len + 1);
	if (!ret)
		return (NULL);
	ret = ft_strncpy(ret, (s + start), len);
	return (ret);
}
