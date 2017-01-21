/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 15:47:33 by cfu               #+#    #+#             */
/*   Updated: 2017/01/19 20:36:41 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_list;
	void	*contentcpy;
	size_t	cscpy;

	if (!(new_list = (t_list *)ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		new_list->content = NULL;
		new_list->content_size = 0;
	}
	else
	{
		cscpy = content_size;
		contentcpy = ft_strnew(cscpy);
		ft_memcpy(contentcpy, content, cscpy);
		new_list->content = contentcpy;
		new_list->content_size = &cscpy;
	}
	new_list->next = NULL;
	return (new_list);
}
