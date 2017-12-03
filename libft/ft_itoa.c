/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 17:10:15 by vpalyvod          #+#    #+#             */
/*   Updated: 2016/12/12 11:57:03 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	get_str_len(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			str_len;
	unsigned int	n_copy;

	str_len = get_str_len(n);
	n_copy = n;
	if (n < 0)
	{
		n_copy = -n;
		str_len++;
	}
	if (!(str = ft_strnew(str_len)))
		return (NULL);
	str[--str_len] = n_copy % 10 + '0';
	while (n_copy /= 10)
		str[--str_len] = n_copy % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
