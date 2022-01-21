/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:04:28 by jervasti          #+#    #+#             */
/*   Updated: 2021/12/13 22:00:26 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Allocates with malloc and returns a copy of the string given as arg
** without whitespaces at the beginning or at the end of the string.
** Will be considered as withespaces the following characters
** ' ' , '\n' , '\t'
** If s has no whitespaces at the beginnign or at the end,
** the function returns a copy of s.
** If the allocation fails the function returns NULL.
*/
static int	find_null_index(char const *s)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i--;
	}
	i++;
	return (i);
}

char	*ft_strtrim(char const *s)
{
	char	*result;
	int		i;
	int		k;
	int		stop;

	i = 0;
	k = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	stop = find_null_index(s);
	result = (char *)malloc(sizeof(char) * (stop + 1));
	if (!result)
		return (NULL);
	while (i < stop)
	{
		result[k] = s[i];
		i++;
		k++;
	}
	result[k] = '\0';
	return (result);
}
