/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inxes.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 03:01:07 by rlutt             #+#    #+#             */
/*   Updated: 2017/02/08 17:52:35 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			**ft_getinxs(char **tet, int y, int x)
{
	int		**res;
	int		**tmp;
	int		ylen;
	int		xlen;

	ylen = ft_tbllen(tet);
	xlen = ft_strlen(*tet);
	tmp = (int **)ft_memalloc(sizeof(int *) * 4);
	res = tmp;
	y = -1;
	while (++y < ylen)
	{
		x = -1;
		while (++x < xlen)
		{
			if (tet[y][x] == '#')
			{
				*tmp = ft_newipair(y, x);
				tmp++;
			}
		}
	}
	return (res);
}

int			*ft_gettopinxs(char **tet)
{
	int		y;
	int		x;
	int		ylen;
	int		xlen;
	int		*inxes;

	y = -1;
	inxes = NULL;
	ylen = ft_tbllen(tet);
	xlen = ft_strlen(*tet);
	while (++y < ylen)
	{
		x = -1;
		while (++x < xlen)
		{
			if (tet[y][x] == '#')
			{
				inxes = ft_newipair(y, x);
				return (inxes);
			}
		}
	}
	return (inxes);
}

int			*ft_getlefinxs(char **tet)
{
	int		y;
	int		x;
	int		ylen;
	int		xlen;
	int		*inxes;

	ylen = ft_tbllen(tet);
	xlen = ft_strlen(*tet);
	x = -1;
	inxes = NULL;
	while (++x < xlen)
	{
		y = -1;
		while (++y < ylen)
		{
			if (tet[y][x] == '#')
			{
				inxes = ft_newipair(y, x);
				return (inxes);
			}
		}
	}
	return (inxes);
}

int			*ft_getstart(char **tet)
{
	int		*topi;
	int		*lfti;
	int		*start;

	if (!(topi = ft_gettopinxs(tet)))
		return (NULL);
	if (!(lfti = ft_getlefinxs(tet)))
		return (NULL);
	if (!(start = ft_newipair(topi[0], lfti[1])))
		return (NULL);
	return (start);
}

int			*ft_newipair(int y, int x)
{
	int		*res;

	res = NULL;
	res = (int*)ft_memalloc(sizeof(int) * 2);
	res[0] = y;
	res[1] = x;
	return (res);
}
