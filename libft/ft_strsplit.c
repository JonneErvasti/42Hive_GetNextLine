/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:15:53 by jervasti          #+#    #+#             */
/*   Updated: 2021/12/13 20:42:17 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Allocates with malloc and returns an array of 'fresh' strings
** (all ending with '\0' including the array itself)
** obtained by splitting s using the character c as a delimeter.
**
** If the allocation fails the function returns NULL.
**
** Example: ft_strsplit("*hello*fellow***students*", '*')
** returns: ["hello", "fellow", "students"].
*/

static int	ft_wlen(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

static int	ft_count_words(char const *s, char c)
{
	int	words;
	int	characterfound;
	int	i;

	i = 0;
	words = 0;
	characterfound = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			characterfound = 1;
		if (characterfound == 1 && s[i] == c)
		{
			words++;
			characterfound = 0;
		}
		i++;
	}
	if (characterfound == 1)
		words++;
	return (words);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**array;
	int		words;
	int		i;

	i = 0;
	words = ft_count_words(s, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (array == NULL)
		return (NULL);
	while (words--)
	{
		while (*s != '\0' && *s == c)
			s++;
		array[i] = ft_strsub(s, 0, ft_wlen(s, c));
		if (array[i] == NULL)
		{
			free(array[i]);
			return (NULL);
		}
		s = s + ft_wlen(s, c);
		i++;
	}
	array[i] = 0;
	return (array);
}
