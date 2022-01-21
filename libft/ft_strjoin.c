/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:42:56 by jervasti          #+#    #+#             */
/*   Updated: 2021/12/14 14:02:25 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocaters with malloc and returns a 'fresh' string ending with '\0',
** result of the concatenation of s1 and s2.
** If the allocation fails the function returns NULL.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	len1;
	unsigned int	len2;
	char			*result;
	int				i;

	if (s1 && s2)
	{
		i = -1;
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		result = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
		if (result == NULL)
			return (NULL);
		while (s1[++i])
			result[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			result[len1] = s2[i];
			len1++;
		}
		result[len1] = '\0';
		return (result);
	}
	return (NULL);
}
