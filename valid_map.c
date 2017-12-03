/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 18:03:21 by vpalyvod          #+#    #+#             */
/*   Updated: 2017/10/24 18:03:26 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

void	check_correct_size_map(t_mains mains, int fd)
{
	if (mains.width_map != 24 || mains.height_map != 24)
	{
		ft_putstr("The map must be 24x24\n");
		exit(1);
	}
	close(fd);
}

void	exit_message(void)
{
	ft_putstr("The map is invalid\n");
	exit(1);
}

void	check_correct_map(char *filename, int count, t_mains *mains)
{
	int		fd;
	int		x;
	char	*line;
	char	**mass;
	int		xmax;

	mains->height_map = 0;
	fd = open(filename, O_RDONLY);
	xmax = 0;
	while (get_next_line(fd, &line))
	{
		mass = ft_split(line);
		x = count_elem(mass);
		if (count > 0 && x != xmax)
			exit_message();
		xmax = x;
		ft_strdel_mass(mass);
		free(line);
		count++;
		mains->height_map++;
	}
	mains->width_map = xmax;
	check_correct_size_map(*mains, fd);
}
