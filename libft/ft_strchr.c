/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jonne.ervasti@student.hive.fi>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:34:25 by jervasti          #+#    #+#             */
/*   Updated: 2021/12/02 16:06:35 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* locate character in string
** The function returns a pointer to the first occurrence of the
** character c in the string s OR NULL if the character is not found.
**
** The terminating null byte is considered part of the string,
** so that if c is specified as '\0',
** these functions return a pointer to the terminator.
*/

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	return (NULL);
}
