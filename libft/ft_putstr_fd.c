/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:57:27 by jervasti          #+#    #+#             */
/*   Updated: 2021/12/13 21:21:30 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the string s to the file descriptor fd.
*/

void	ft_putstr_fd(char const *s, int fd)
{
	unsigned int	i;

	i = 0;
	if (s != NULL)
	{
		while (s[i])
			i++;
		write(fd, &s[0], i);
	}
}
