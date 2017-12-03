/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 16:27:51 by vpalyvod          #+#    #+#             */
/*   Updated: 2016/12/11 16:27:58 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int sym)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (0 != i && str[i] != (char)sym)
		i--;
	if (str[i] == (char)sym)
	{
		return ((char *)&str[i]);
	}
	return (0);
}
