/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 09:35:14 by jervasti          #+#    #+#             */
/*   Updated: 2021/12/09 13:19:25 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Use this when you want to overwrite a memory area.
** int arr1[] = {3. 4};
** int arr2[] = {1, 2};
** memcpy(arr1, arr,2, sizeof(int) * 2);
** --> arr1[] == {1, 2,}
**
** The function copies n bytes from memory area src to memory area dst.
** If dst and src overlap, behavior is undefined.
**
** Applications in which dst and src might overlap should use
** memmove(3) instead.
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
