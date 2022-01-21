/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:23:51 by jervasti          #+#    #+#             */
/*   Updated: 2021/12/13 12:02:35 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strcmp  and strncmp functions return an integer less than, equal to,
** or greater than zero if s1 (or the first n bytes thereof) is found,
** respectively, to be less than, to match, or be greater than s2.
*/

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (s2[i] == '\0')
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
