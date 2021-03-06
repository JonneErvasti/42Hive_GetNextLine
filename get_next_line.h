/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jonne.ervasti@student.hive.fi>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:40:04 by jervasti          #+#    #+#             */
/*   Updated: 2022/01/19 08:54:53 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 8
# define FS 10240

# include <stdlib.h>
# include <unistd.h>
# include "./libft/libft.h"
/*
** stdlib for free and malloc
** unistd for read
*/

int	get_next_line(const int fd, char **line);

#endif
