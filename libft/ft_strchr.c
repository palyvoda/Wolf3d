/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 11:28:34 by vpalyvod          #+#    #+#             */
/*   Updated: 2016/12/12 11:40:44 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdio.h"

char	*ft_strchr(const char *str, int sym)
{
	while (*str != '\0' && *str != (char)sym)
		str++;
	if (*str == (char)sym)
		return ((char *)str);
	return (0);
}
