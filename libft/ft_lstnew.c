/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jonne.ervasti@student.hive.fi>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 09:00:15 by jervasti          #+#    #+#             */
/*   Updated: 2021/12/14 10:40:15 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a “fresh” link.
** The variables content and content_size of the new link are initialized by
** copy of the parameters of the function.
** 
** If the parameter content is nul, the variable content is initialized to
** NULL and the variable content_size is initialized to 0 even
** if the parameter content_size isn’t.
** 
** The variable next is initialized to NULL.
** If the allocation fails, the function returns NULL.
*/
t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	list;

	list = (t_list *)malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	if (content == NULL)
	{
		list->content = NULL;
		list->content_size = 0;
		list->next = NULL;
		return (list);
	}
	list->content = malloc(content_size);
	if (!list->content)
		return (NULL);
	ft_memmove(list->content, content, content_size);
	list->content_size = content_size;
	list->next = NULL;
	return (list);
}
