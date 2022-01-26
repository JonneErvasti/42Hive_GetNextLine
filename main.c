/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jonne.ervasti@student.hive.fi>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:23:47 by jervasti          #+#    #+#             */
/*   Updated: 2022/01/26 12:57:55 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int ac, char **av)
{
	int		file1;
	char	*line1;
	int		file2;
	char	*line2;

	int		rvalue;
	
	if (ac == 1) {
		printf("FEED ME THE FILE!");
		return (0);
	}

	printf("\nBUFFER SIZE: %d\n\n", BUFF_SIZE);

	file1 = open(av[1], O_RDONLY);
	file2 = open(av[2], O_RDONLY);
	
	rvalue = get_next_line(file1, &line1);
	printf("F1: %s\n", line1);
	free(line1);
	
	rvalue = get_next_line(file2, &line2);
	printf("F2: %s\n", line2);
	free(line2);
	
	rvalue = 1;
	while (rvalue == 1)
	{
		rvalue = get_next_line(file1, &line1);
		printf("F1: %s\n", line1);
		free(line1);
	}
	
	rvalue = 1;
	while (rvalue == 1)
	{
		rvalue = get_next_line(file2, &line2);
		printf("F2: %s\n", line2);
		free(line2);
	}
/*
	Here are some useful commands if you would like to use them:

	rvalue = get_next_line(42, &line3);
	printf("returned int value: %d\n", rvalue);

	printf("\nINSIDE MAIN\n\n");


*/
	
	close(file1);
	close(file2);
	
	return (0);
}
