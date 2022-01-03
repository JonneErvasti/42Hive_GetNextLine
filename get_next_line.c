/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jonne.ervasti@student.hive.fi>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:20:31 by jervasti          #+#    #+#             */
/*   Updated: 2021/12/21 12:47:57 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
/*
** Write a function that returns a line read from a file descriptor.
*/

int	get_next_line(const int fd) /* add , char **line)*/
{
	char		buffer[BUFF_SIZE + 1];
	//static char	*copy;
	while (read(fd, &buffer, BUFF_SIZE))
		write (1, &buffer, BUFF_SIZE);
	return (0);


/*
** The return value can be 1, 0 or -1 depending on whether a line has been read,
**when the reading has been completed, or if an error has happened respectively.
*/
//if (malloc null, ..)
//	return (-1);
}
