/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 11:21:46 by vpalyvod          #+#    #+#             */
/*   Updated: 2016/12/12 11:23:21 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *str1, const char *str2)
{
	int i;
	int pos;
	int len;

	i = 0;
	pos = 0;
	len = 0;
	while (str2[len] != '\0')
		len++;
	if (len == 0)
		return ((char *)str1);
	while (str1[i])
	{
		while (str2[pos] == str1[i + pos])
		{
			if (pos == len - 1)
				return ((char *)str1 + i);
			pos++;
		}
		pos = 0;
		i++;
	}
	return (0);
}
