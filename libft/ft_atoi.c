/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:17:44 by jervasti          #+#    #+#             */
/*   Updated: 2021/12/13 15:48:34 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Atoi converts a set of (ASCII) character numbers to int
**
*/

int	ft_atoi(const char *str)
{
	int		i;
	long	result;
	int		neg;

	result = 0;
	neg = 1;
	i = ft_skipwhitespace(str);
	if (str[i] == '-')
	{
		neg *= -1;
		i++;
	}
	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return ((int)result * neg);
}
