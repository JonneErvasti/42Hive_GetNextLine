/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:42:22 by jervasti          #+#    #+#             */
/*   Updated: 2021/11/24 14:42:57 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates with maloc and returns a "fresh" memory area.
** The memory allocated is initialized to 0.
** If the allocation fails, the function returns NULL.
*/

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;

	mem = (void *) malloc(size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}
