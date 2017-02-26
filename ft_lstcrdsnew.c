/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcrdsnew.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 18:43:43 by cfu               #+#    #+#             */
/*   Updated: 2017/02/26 14:09:07 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int				*ft_newipair(int y, int x)
{
	int		*res;

	res = NULL;
	res = (int*)ft_memalloc(sizeof(int) * 2);
	res[0] = y;
	res[1] = x;
	return (res);
}

size_t			ft_itbllen(int **tbl)
{
	size_t	i;
	int		**tmp;

	i = 0;
	tmp = tbl;
	while (*tmp)
	{
		i++;
		tmp++;
	}
	return (i);
}

void			*ft_crddup(int **crds)
{
	int		i;
	int		**res;
	int		**tmp;

	i = -1;
	if (!(tmp = (int **)ft_memalloc(sizeof(int*) * ft_itbllen(crds))))
		return (NULL);
	res = tmp;
	while (++i < 4)
	{
		if (!(*tmp = ft_memalloc(sizeof(int) * 2)))
			return (NULL);
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
