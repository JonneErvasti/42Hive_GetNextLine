/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:16:59 by jervasti          #+#    #+#             */
/*   Updated: 2021/12/13 21:58:16 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’.
** Each character of the string is initialized at ’\0’.
** If the allocation fails the function returns NULL.
*/
char	*ft_strnew(size_t size)
{
	char	*p;

	p = (char *) malloc(sizeof(char) * size + 1);
	if (!p)
		return (NULL);
	p[size] = '\0';
	while (size--)
		p[size] = '\0';
	return (p);
}
