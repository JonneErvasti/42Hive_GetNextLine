/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:10:12 by jervasti          #+#    #+#             */
/*   Updated: 2021/11/30 12:46:50 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes len bytes of (unsigned char)c to the string b.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	if (len == 0)
		return (b);
	p = (unsigned char *)b;
	while (len--)
	{
		*p = (unsigned char)c;
		if (len)
			p++;
	}
	return (b);
}
