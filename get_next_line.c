/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jonne.ervasti@student.hive.fi>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:20:31 by jervasti          #+#    #+#             */
/*   Updated: 2022/01/20 09:30:58 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
/*
** Write a function that returns a line read from a file descriptor.
**
** The return value can be 1, 0 or -1 depending on whether
**  1) a line has been read,
**  0) when the reading has been completed,
** -1) or if an error has happened respectively.
*/

static void	strdestroyer(char **str)
{
	ft_strclr(*str);
	free(*str);
	*str = NULL;
}

static int	seek_and_destroy(char **str)
{
	char	*tmp;

	tmp = *str;
	*str = ft_strdup(tmp);
	strdestroyer(&tmp);
	if (!*str)
		return (-1);
	return (1);
}

static int	linecheck(char **line, char **bank)
{
	char	*tmp;

	*bank = ft_strchr(*line, '\n');
	if (*bank)
	{
		**bank = '\0';
		*bank += 1;
		if (**bank == '\0')
			*bank = NULL;
		else
		{
			tmp = *bank;
			*bank = ft_strdup(*bank);
			ft_strclr(tmp);
			if (!*bank)
				return (-1);
		}
		return (1);
	}
	return (0);
}

static int	collect(char **line, char *buf)
{
	char	*tmp;

	if (*line == NULL)
		*line = ft_strdup(buf);
	else
	{
		tmp = *line;
		*line = ft_strjoin(tmp, buf);
		strdestroyer(&tmp);
	}
	if (!*line)
		return (-1);
	return (1);
}

int	get_next_line(const int fd, char **line)
{
	static char	*pbank[FS + 1];
	char		buffer[BUFF_SIZE + 1];
	ssize_t		readsize;

	if (read(fd, &buffer, 0) || fd < 0 || fd > 10240 || !line || BUFF_SIZE <= 0)
		return (-1);
	*line = pbank[fd];
	if (pbank[fd] != NULL && linecheck(line, &pbank[fd]))
		return (1);
	readsize = read(fd, &buffer, BUFF_SIZE);
	while (readsize > 0)
	{
		buffer[readsize] = '\0';
		if (collect(line, buffer) == 1 && linecheck(line, &pbank[fd]) == 1 \
		&& seek_and_destroy(line) == 1)
			return (1);
		else if (!**line)
			return (-1);
		readsize = read(fd, &buffer, BUFF_SIZE);
	}
	if (*line)
		return (1);
	strdestroyer(line);
	return (0);
}
