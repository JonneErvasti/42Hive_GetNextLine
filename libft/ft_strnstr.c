/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jonne.ervasti@student.hive.fi>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:50:34 by jervasti          #+#    #+#             */
/*   Updated: 2021/12/10 10:26:42 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strnstr function locates the first occurrence of the null-terminated
** string needle in the string haystack, where not more than len characters are
** searched.  Characters that appear after a ‘\0’ character are not searched.
**
** If needle is an empty string, big is returned; if needle occurs nowhere in
** haystack, NULL is returned; otherwise a pointer to the first character of
** the first occurrence of needle is returned.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (i + j < len && haystack[i + j] == needle[j])
			{
				j++;
				if (needle[j] == '\0')
					return ((char *)(&haystack[i]));
			}
		}
		i++;
	}
	return (NULL);
}
