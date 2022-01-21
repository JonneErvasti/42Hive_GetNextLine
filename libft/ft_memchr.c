/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 13:49:04 by jervasti          #+#    #+#             */
/*   Updated: 2021/12/10 08:33:28 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** The function locates the first occurrence of c (converted to an
** unsigned char) in string s.
**
** The function returns a pointer to the byte located, or NULL if
** no such byte exists within n bytes.
*/

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*s;
	size_t				i;

	s = (const unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (s[i] == (unsigned char)c)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}
