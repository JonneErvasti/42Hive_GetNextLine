/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:01:50 by jervasti          #+#    #+#             */
/*   Updated: 2021/11/22 10:16:51 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The isalpha() function tests for any character for which isupper(3) or
** islower(3) is true.  The value of the argument must be representable as an
** unsigned char or the value of EOF.
**
** The isalpha() function returns zero if the character tests false and returns
** non-zero if the character tests true.
**
** 	RISK: FUNCTION WILL NOT RETURN THE ARGUMENT!
*/

int	ft_isalpha(int c)
{
	if (ft_isupper(c) || ft_islower(c))
		return (1);
	else
		return (0);
}
