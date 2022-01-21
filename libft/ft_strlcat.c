/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:47:43 by jervasti          #+#    #+#             */
/*   Updated: 2021/12/13 09:36:44 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Strlcat() appends size of src to the end of dst.
** 
** It will append at most dstsize - strlen(dst) - 1 characters.
** 
** It will then NUL-terminate, unless dstsize is 0 or the original
** dst string was longer than dstsize (in practice
** this should not happen as it means that either dstsize is incorrect or that
** dst is not a proper string).
**
** RISK: ROOM FOR '\0' SHOULD BE INCLUDED IN DESTSIZE
*/

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	destsize;
	size_t	i;

	destsize = ft_strlen(dst);
	i = 0;
	if (size < destsize)
		return (size + ft_strlen(src));
	while (src[i] && (destsize + i) < (size - 1))
	{
		dst[destsize + i] = src[i];
		i++;
	}
	dst[destsize + i] = '\0';
	return (ft_strlen(src) + destsize);
}
