/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 14:10:36 by vpalyvod          #+#    #+#             */
/*   Updated: 2016/12/15 14:15:29 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_fibonacci(int index)
{
	int fibm;
	int fibmm;

	if (index >= 47)
		return (0);
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	fibm = ft_fibonacci(index - 1);
	fibmm = ft_fibonacci(index - 2);
	return (fibm + fibmm);
}
