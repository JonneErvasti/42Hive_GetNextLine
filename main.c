/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jonne.ervasti@student.hive.fi>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:23:47 by jervasti          #+#    #+#             */
/*   Updated: 2022/01/07 23:15:40 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int ac, char **av)
{
	int		jesus;
	char	*saves;
	
	if (ac == 1) {
		printf("FEED ME THE FILE!");
		return (0);
	}

	jesus = open(av[1], O_RDONLY);
	get_next_line(jesus, &saves);
	printf("line of av1: %s", saves);
	close(jesus);
	/*while (get_next_line(fd, &save) == 1)
	{
		ft_putstr(save);
		ft_putchar('\n');
		free(save);
	}*/
	return (0);
}
