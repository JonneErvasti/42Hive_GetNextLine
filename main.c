/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jonne.ervasti@student.hive.fi>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:23:47 by jervasti          #+#    #+#             */
/*   Updated: 2022/01/19 14:43:37 by jervasti         ###   ########.fr       */
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
//	int		file3;
//	char	*line3;

	int		rvalue;
	
	if (ac == 1) {
		printf("FEED ME THE FILE!");
		return (0);
	}

	printf("\nBUFFER SIZE: %d\n\n", BUFF_SIZE);

	file1 = open(av[1], O_RDONLY);
	file2 = open(av[2], O_RDONLY);
//	file3 = open(av[3], O_RDONLY);
	
	rvalue = get_next_line(file1, &line1);
	printf("\nINSIDE MAIN\n\n");
	printf("rvalue:\t%d\n", rvalue);
	printf("Returned line in main: %s\n", line1);
	printf("------------------------------");
	printf("\n\n");
	free(line1);
	
	rvalue = get_next_line(file2, &line2);
	printf("\nINSIDE MAIN\n\n");
	printf("rvalue:\t%d\n", rvalue);
	printf("\nReturned line in main: %s\n", line2);
	printf("------------------------------");
	printf("\n\n\n");
	free(line2);
	
	rvalue = get_next_line(file1, &line1);
	printf("\nINSIDE MAIN\n\n");
	printf("rvalue:\t%d\n", rvalue);
	printf("Returned line in main: %s\n", line1);
	printf("------------------------------");
	printf("\n\n");
	free(line1);
	
	rvalue = get_next_line(file1, &line1);
	printf("\nINSIDE MAIN\n\n");
	printf("rvalue:\t%d\n", rvalue);
	printf("Returned line in main: %s\n", line1);
	printf("------------------------------");
	printf("\n\n");
	free(line1);
	
	rvalue = get_next_line(file1, &line1);
	printf("\nINSIDE MAIN\n\n");
	printf("rvalue:\t%d\n", rvalue);
	printf("Returned line in main: %s\n", line1);
	printf("------------------------------");
	printf("\n\n");
	free(line1);

	rvalue = 1;
	while (rvalue == 1)
	{
		rvalue = get_next_line(file2, &line2);
		printf("\nINSIDE MAIN\n\n");
		printf("rvalue:\t%d\n", rvalue);
		printf("\nReturned line in main: %s\n", line2);
		printf("------------------------------");
		printf("\n\n\n");
		free(line2);
	}
/*
	rvalue = get_next_line(file2, &line2);
	printf("rvalue:\t%d\n", rvalue);
	printf("\nReturned line in main: %s", line2);
	printf("\n\n\n");

	rvalue = get_next_line(file2, &line2);
	printf("rvalue:\t%d\n", rvalue);
	printf("\nReturned line in main: %s", line2);
	printf("\n\n\n");
*/
/*	
	rvalue = get_next_line(file3, &line3);
	printf("rvalue:\t%d\n", rvalue);
	printf("\nReturned line in main: %s", line2);
	printf("\n\n\n");
*/
/*	
	rvalue = get_next_line(42, &line3);
	printf("returned int value: %d\n", rvalue);
*/
	//printf("BUFFER SIZE: %d\n", BUFF_SIZE);
	
	close(file1);
	close(file2);
//	close(file3);
	
	return (0);
}
