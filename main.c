/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jonne.ervasti@student.hive.fi>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:23:47 by jervasti          #+#    #+#             */
/*   Updated: 2022/01/04 23:13:22 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int ac, char **av)
{
	int	fd;
	int		fd;
	char	*save;
											teksti
	if (ac == 1)
		printf("FEED ME THE FILE!");
	fd = open(av[1], O_RDONLY);
	get_next_line(fd);
	//muokkaa void niin että ottaa vastaan tiedostoja
	//get_next_line(fd, line);
	//get_next_line(fd, line);
	close(av[1]);
	while (get_next_line(fd, &save) == 1)
	{
		ft_putstr(save);
		ft_putchar('\n');
		free(save);
	}
	muutos
	//muokkaa void niin että ottaa vastaan tiedostoja
	//get_next_line(fd, line);
	//get_next_line(fd, line);
	close(fd);
	return (0);
}
