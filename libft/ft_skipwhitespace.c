/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skipwhitespace.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:15:35 by jervasti          #+#    #+#             */
/*   Updated: 2021/11/23 09:16:02 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_skipwhitespace(char const *str)
{
	int	i;

	i = 0;
	while (ft_iswhitespace(str[i]))
		i++;
	return (i);
}
