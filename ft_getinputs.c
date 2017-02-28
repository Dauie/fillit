/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getinputs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 17:53:21 by cfu               #+#    #+#             */
/*   Updated: 2017/02/27 18:43:56 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list			*ft_getinputs(int fd)
{
	t_list		*db;
	t_list		*tmp;
	char		*tet;
	int			linum;

	if (!(db = ft_lstnew(NULL, 0)))
		return (NULL);
	tmp = db;
	db->rbyt = 21;
	while (db->rbyt == 21)
	{
		tet = ft_gettet(fd, &db->rbyt);
		if ((linum = ft_validate_tets(tet)) != -1 && *tet)
			db = ft_list_em(tmp, linum);
		else
			return ((db = NULL));
		ft_strdel(&tet);
	}
	ft_strdel(&tet);
	return (db);
}

char			*ft_gettet(int fd, size_t *rbyt)
{
	char		*tet;

	if (!(tet = ft_strnew(BUFF_SIZE)))
		return (NULL);
	*rbyt = read(fd, tet, BUFF_SIZE);
	return (tet);
}

t_list			*ft_list_em(t_list *db, int linum)
{
	static int	c;
	int			**crds;
	t_list		*crntnd;

	crntnd = NULL;
	if (!c)
		c = 0;
	if (!(crds = ft_getcoords(linum)))
		return (NULL);
	if (!(crntnd = ft_lstcrdsnew(crds, ('A' + c++))))
		return (NULL);
	if (db->crds == NULL)
	{
		db->crds = ft_crddup(crds);
		db->content_size = 'A';
	}
	else
		ft_lsteadd(&db, crntnd);
	return (db);
}

void			ft_initbline(char *bline, size_t len)
{
	size_t		i;
	char		*tmp;

	tmp = bline;
	i = -1;
	while (++i < len)
		tmp[i] = '.';
}

int				**ft_getcoords(int linum)
{
	int			xy;
	int			**res;
	int			**crds;

	crds = ft_memalloc(sizeof(int *) * 4);
	res = crds;
	xy = -1;
	while (++xy < 4)
	{
		if (!(*crds = ft_newipair(g_cy[linum][xy], g_cx[linum][xy])))
			return (NULL);
		crds++;
	}
	return (res);
}
