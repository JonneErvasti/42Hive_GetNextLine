/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jonne.ervasti@student.hive.fi>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:23:47 by jervasti          #+#    #+#             */
/*   Updated: 2022/01/08 18:52:40 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int ac, char **av)
{
	int		jesus;
	char	*saves;
	int		selanne;
	char	*rebounds;
	
	if (ac == 1) {
		printf("FEED ME THE FILE!");
		return (0);
	}

	printf("BUFFER SIZE: %d\n", BUFF_SIZE);
	jesus = open(av[1], O_RDONLY);
	selanne = open(av[2], O_RDONLY);
	
	get_next_line(jesus, &saves);
	printf("\nReturned line in main: %s", saves);
	printf("\n\n\n");
	
	get_next_line(selanne, &rebounds);
	printf("\nReturned line in main: %s", rebounds);
	printf("\n\n\n");
	
	get_next_line(jesus, &saves);
	printf("\nReturned line in main: %s", saves);
	printf("\n\n\n");
	
	get_next_line(selanne, &rebounds);
	printf("\nReturned line in main: %s", rebounds);
	printf("\n\n\n");
	
	close(jesus);
	close(selanne);
	
	return (0);
}
