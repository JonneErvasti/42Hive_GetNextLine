/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:56:17 by jervasti          #+#    #+#             */
/*   Updated: 2021/12/13 21:22:57 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function append a copy of the null-terminated string s2 to the end
** of the null-terminated string s1, then add a terminating '0\'
** The string s1 must have sufficient space to hold the result.
** 
** The source and destinations strings should not overlap,
** as the behavior is undefined.
**
** RISK: POSSIBLE OVERLAPPING
*/

char	*ft_strcat(char *dest, char *source)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (source[j] != '\0')
	{
		dest[i] = source[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
