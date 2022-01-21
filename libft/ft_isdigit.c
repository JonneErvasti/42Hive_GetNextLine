/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 10:43:57 by jervasti          #+#    #+#             */
/*   Updated: 2021/12/13 21:09:24 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function tests if a character is a digit and returns 0 if not.
*/

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
