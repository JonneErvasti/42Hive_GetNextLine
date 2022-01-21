/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:29:04 by jervasti          #+#    #+#             */
/*   Updated: 2021/12/13 21:53:17 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Same function as strcat exept copies not more than n character.
*/

char	*ft_strncat(char *dest, char *source, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (source[j] != '\0' && j < n)
	{
		dest[i] = source[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
