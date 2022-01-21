/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:26:06 by jervasti          #+#    #+#             */
/*   Updated: 2021/12/10 08:46:57 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Returns a pointer to a new string which is a duplicate of the string s.
** Memory for the new string is obtained with malloc(3),
** and can be freed with free(3).
**
**On success, the function returns a pointer to the duplicated string.
** It returns NULL if insufficient memory was available,
** with errno set to indicate the cause of the error.
*/

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*pointer;

	length = 0;
	while (src[length])
		length++;
	pointer = (char *)malloc(sizeof(*pointer) * (length + 1));
	if (pointer == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		pointer[i] = src[i];
		i++;
	}
	pointer[i] = '\0';
	return (pointer);
}
