/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 16:30:18 by vpalyvod          #+#    #+#             */
/*   Updated: 2016/12/11 16:30:59 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int str)
{
	if (str >= 65 && str <= 90)
		return (str + 32);
	else
		return (str);
}
