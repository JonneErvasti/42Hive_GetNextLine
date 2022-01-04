/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jonne.ervasti@student.hive.fi>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:23:47 by jervasti          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/12/21 13:06:35 by jervasti         ###   ########.fr       */
=======
/*   Updated: 2022/01/03 21:13:17 by jervasti         ###   ########.fr       */
>>>>>>> cad70b2459d49faed37a41cee0da98bf8e159654
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int ac, char **av)
{
<<<<<<< HEAD
	int	fd;
=======
	int		fd;
	char	*save;
>>>>>>> cad70b2459d49faed37a41cee0da98bf8e159654

	if (ac == 1)
		printf("FEED ME THE FILE!");
	fd = open(av[1], O_RDONLY);
<<<<<<< HEAD
	get_next_line(fd);
	//muokkaa void niin että ottaa vastaan tiedostoja
	//get_next_line(fd, line);
	//get_next_line(fd, line);
	close(av[1];
=======
	while (get_next_line(fd, &save) == 1)
	{
		ft_putstr(save);
		ft_putchar('\n');
		free(save);
	}
	
	//muokkaa void niin että ottaa vastaan tiedostoja
	//get_next_line(fd, line);
	//get_next_line(fd, line);
	close(fd);
>>>>>>> cad70b2459d49faed37a41cee0da98bf8e159654
	return (0);
}
