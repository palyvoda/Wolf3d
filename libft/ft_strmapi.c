/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 15:47:33 by vpalyvod          #+#    #+#             */
/*   Updated: 2016/12/11 16:12:56 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
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
		ret[i] = f(i, *s);
		i++;
		s++;
	}
	return (ret);
}
