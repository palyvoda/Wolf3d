/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 12:38:49 by vpalyvod          #+#    #+#             */
/*   Updated: 2017/03/27 12:39:16 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

char				*correct_ft_strjoin(char const *s1, char const *s2)
{
	char			*conc_str;

	if (s1 != NULL && s2 != NULL)
	{
		conc_str = (char *)malloc(sizeof(char) * (ft_strlen(s1)
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

char				*correct_ft_strdup(const char *str)
{
	char			*ptr;
	size_t			sum;

	ptr = (char *)str;
	sum = ft_strlen(ptr);
	ptr = (char *)malloc(sizeof(char) * sum + 1);
	if (ptr != NULL)
		ft_strcpy(ptr, str);
	else
		return (NULL);
	return (ptr);
}

static void			ft_restline(char **rest, char *buf)
{
	char			*tmp;

	tmp = NULL;
	if (*rest)
	{
		tmp = correct_ft_strdup(*rest);
		ft_memdel((void **)rest);
		*rest = correct_ft_strjoin(tmp, buf);
		ft_memdel((void **)&tmp);
	}
	else
		*rest = ft_strdup(buf);
}

static int			ft_get_this_line(char **rest, char **line)
{
	char			*tmp;

	tmp = ft_strchr(*rest, '\n');
	if (tmp)
	{
		*line = ft_strsub(*rest, 0, tmp - *rest);
		ft_memmove(*rest, tmp + 1, ft_strlen(tmp));
		tmp = NULL;
		return (1);
	}
	return (0);
}

int					get_next_line(int const fd, char **line)
{
	static char		*rest = NULL;
	char			buf[BUFF_SIZE + 1];
	int				ret;

	if (!line)
		return (-1);
	if (rest && ft_get_this_line(&rest, line))
		return (1);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		if (ret == -1)
			return (-1);
		buf[ret] = '\0';
		ft_restline(&rest, buf);
		ft_memset(buf, '\0', BUFF_SIZE + 1);
		if (ft_get_this_line(&rest, line))
			return (1);
	}
	if (rest == NULL || rest[0] == '\0')
		return (0);
	*line = rest;
	rest = NULL;
	return (1);
}
