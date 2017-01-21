/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_em.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 18:39:24 by cfu               #+#    #+#             */
/*   Updated: 2017/01/19 18:36:51 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list		*ft_list_em(char *str, t_list *tet_list)
{
	t_list	*current_node;
	t_list	*tmp;
	current_node = NULL;
	if (*str)
		current_node = ft_lstnew(str, ft_strlen(str));
	tmp = tet_list;
	if (tet_list->content == NULL)
	{
		tet_list->content = ft_strdup((char *)current_node->content);

		/*
		 * remember to make function to delete first node and fix memory leaks
		 */
	}
	else
		ft_lsteadd(&tet_list, current_node);
	return (tet_list);
}
