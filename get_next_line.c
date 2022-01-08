/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jonne.ervasti@student.hive.fi>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:20:31 by jervasti          #+#    #+#             */
/*   Updated: 2022/01/08 18:55:09 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
/*
** Write a function that returns a line read from a file descriptor.
**
** The return value can be 1, 0 or -1 depending on whether
**  1) a line has been read,
**  0) when the reading has been completed,
** -1) or if an error has happened respectively.
*/


int	get_next_line(const int fd, char **line)
{
	static char	*savedpointers[FDSIZE];
	char		buffer[BUFF_SIZE + 1];
	//char 		*tmp;
	int			reader;

	if (!fd || fd < 0 || !line || BUFF_SIZE <= 0)
		return (-1);
	// TÄMÄ EI VIELÄ VÄLTTÄMÄTTÄ RIITÄ

	reader = 1;
	while (reader > 0)
	{
		reader = read(fd, &buffer, BUFF_SIZE);
		buffer[BUFF_SIZE] = '\0';
		if (savedpointers[fd] == NULL)
			printf("\nHERE\n");
		printf("GNL:\tbuffer: %s\n", buffer);
		if (ft_strchr((char *)buffer, '\n'))
		{
			printf("\nlöytyi\n");
			break;
		}
	}
	/*
	reader = read(fd, &buffer, BUFF_SIZE);
	printf("GNL:\treader: %d\n", reader);
	printf("GNL:\tbuffer: %s\n", buffer);
	*/

	//jos tallennuspaikassa ei ole mitään, aloita uusi
	//muuten lisää tallennuspaikkaan

//	printf("\nBEFORE MEMMOVE\n");
//	ft_memmove(*line, buffer, BUFF_SIZE + 1);
//	printf("\nAFTER MEMMOVE\n");
	// TÄMÄ SIIRTÄÄ LOPULLISEEN SIJAINTIIN JA EI PITÄISI
	// POINTTERIN PITÄÄ OSOSITTAA STATICCIIN


	// MUISTA LAITTAA TÄMÄ SIIHEN KOHTAAN KUN FILU ON LUETTU.
	return (0);
//	JOS MALLOC NULL return (-1);
// VAPAUTA MUISTI
}
