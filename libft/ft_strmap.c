/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 11:25:22 by vpalyvod          #+#    #+#             */
/*   Updated: 2016/12/12 11:39:21 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*ret;
	size_t	retulen;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	retulen = ft_strlen(s);
	ret = ft_memalloc(retulen + 1);
	if (!ret)
		return (NULL);
	while (*s)
	{
		ret[i++] = f(*s);
		s++;
	}
	return (ret);
}
