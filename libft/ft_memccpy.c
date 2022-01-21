/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 12:27:30 by jervasti          #+#    #+#             */
/*   Updated: 2021/12/13 09:02:46 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** The memccpy() function copies bytes from string src to string dst.
** If the character c (as converted to an unsigned char) occurs in
** the string src, the copy stops and a pointer to the byte after
** the copy of c in the string dst is returned.
**
** Otherwise, n bytes are copied, and a NULL pointer is returned.
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*d;
	unsigned char		*s;
	size_t				i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	while (i < n && s[i] != (unsigned char)c)
	{
		d[i] = s[i];
		i++;
	}
	if (i == n)
		return (NULL);
	else
	{
		d[i] = s[i];
		i++;
		return (&d[i]);
	}
}
