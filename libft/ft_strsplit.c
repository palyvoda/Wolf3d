/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 17:08:58 by vpalyvod          #+#    #+#             */
/*   Updated: 2016/12/12 14:10:29 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "stdio.h"
#include "libft.h"

static	size_t	ft_countwd(const char *s, char c)
{
	size_t i;
	size_t wd_count;

	i = 0;
	wd_count = 0;
	while (s[i] != '\0')
	{
		while ((s[i] == c) && s[i] != '\0')
			i++;
		if (s[i])
			wd_count++;
		while (!(s[i] == c) && s[i] != '\0')
			i++;
	}
	return (wd_count);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**fin;
	size_t	i;
	size_t	j;
	size_t	len;

	if ((s == NULL)
		|| (!(fin = (char **)malloc(sizeof(char *) * (ft_countwd(s, c) + 1)))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			len = 0;
			while (s[i + len] && (s[i + len] != c))
				len++;
			fin[j++] = ft_strsub(s, i, len);
			i = i + len;
		}
	}
	fin[j] = 0;
	return (fin);
}
