/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 18:32:42 by vpalyvod          #+#    #+#             */
/*   Updated: 2017/05/31 16:40:34 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*conc_str;

	if (s1 != NULL && s2 != NULL)
	{
		conc_str = (char *)malloc(sizeof(char) * (ft_strlen(s1) \
			+ ft_strlen(s2) + 1));
		if (conc_str != NULL)
		{
			ft_strcpy(conc_str, s1);
			ft_strcat(conc_str, s2);
			return (conc_str);
		}
	}
	return (NULL);
}
