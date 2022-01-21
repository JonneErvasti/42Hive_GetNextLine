/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 09:29:34 by jervasti          #+#    #+#             */
/*   Updated: 2021/12/13 22:02:16 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Converts a lowercase letter to the corresponding uppercase letter.
*/

int	ft_toupper(int c)
{
	if ((c >= 97 && c <= 122))
		return (c - 32);
	else
		return (c);
}
