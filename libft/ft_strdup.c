/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 11:31:49 by vpalyvod          #+#    #+#             */
/*   Updated: 2017/05/31 16:41:42 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char	*ft_strdup(const char *str)
{
	char	*ptr;
	size_t	sum;

	ptr = (char *)str;
	sum = ft_strlen(ptr);
	ptr = (char *)malloc(sizeof(char) * sum + 1);
	if (ptr != NULL)
		ft_strcpy(ptr, str);
	else
		return (NULL);
	return (ptr);
}
