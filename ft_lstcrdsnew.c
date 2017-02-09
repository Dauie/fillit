/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcrdsnew.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 18:43:43 by cfu               #+#    #+#             */
/*   Updated: 2017/02/08 18:46:39 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void			*ft_crddup(int **crds)
{
	int		i;
	int		**res;
	int		**tmp;

	i = -1;
	tmp = (int **)ft_memalloc(sizeof(int*) * ft_itbllen(crds));
	res = tmp;
	while (++i < 4)
	{
		*tmp = ft_memalloc(sizeof(int) * 2);
		ft_memcpy(*tmp, *crds, sizeof(int) * 2);
		tmp++;
		crds++;
	}
	return (res);
}

t_list			*ft_lstcrdsnew(int **content, int c)
{
	t_list		*res;

	if (!(res = (t_list*)ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (content != NULL)
	{
		res->crds = ft_crddup(content);
		res->content_size = c;
	}
	else
		res->crds = NULL;
	res->next = NULL;
	return (res);
}
