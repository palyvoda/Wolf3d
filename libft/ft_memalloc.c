/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 17:50:30 by vpalyvod          #+#    #+#             */
/*   Updated: 2016/12/11 17:51:36 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*temp;

	temp = malloc(size);
	return (temp ? ft_memset(temp, 0, size) : NULL);
}
