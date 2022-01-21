/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 09:49:27 by jervasti          #+#    #+#             */
/*   Updated: 2021/12/09 12:00:36 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** The function compares byte string s1 against byte string s2.
** Both strings are assumed to be n bytes long.
**
** The memcmp() function returns zero if the two strings are identical,
** otherwise returns the difference between the first two differing bytes
** (treated as unsigned char values, so that `\200' is greater than `\0')
**
** Zero-length strings are always identical.
*/

int	ft_memcmp(const void *dst, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*d;
	const unsigned char	*s;

	i = 0;
	d = (const unsigned char *)dst;
	s = (const unsigned char *)src;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (d[i] != s[i])
			return (d[i] - s[i]);
		i++;
	}
	return (0);
}
