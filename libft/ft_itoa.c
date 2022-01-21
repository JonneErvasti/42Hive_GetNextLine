/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:46:50 by jervasti          #+#    #+#             */
/*   Updated: 2021/12/13 21:10:28 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Allocate (with malloc(3)) and returns a “fresh” string ending with ’\0’
** representing the integer n given as argument
** Negative numbers must be supported
** If the allocation fails, the function returns NULL
*/

static void	solver(char *array, int n, int index)
{
	int	pointer;

	pointer = index - 1;
	if (n > 9)
		solver(array, n / 10, pointer);
	if (n < 10)
	{
		array[pointer] = n + '0';
		pointer++;
	}
	array[pointer] = n % 10 + '0';
}

static int	ft_n_len(int n)
{
	int	len;

	len = 0;
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	len++;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		space;
	int		nega;

	nega = 0;
	if (n < 0)
	{
		nega = 1;
		n *= -1;
	}
	space = ft_n_len(n);
	str = (char *)malloc(sizeof(char) * (space + 1 + nega));
	if (str == NULL)
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	if (nega == 1)
		str[0] = '-';
	solver(str, n, space + nega);
	str[space + nega] = '\0';
	return (str);
}
