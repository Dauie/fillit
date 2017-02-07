/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 21:56:33 by cfu               #+#    #+#             */
/*   Updated: 2017/02/06 17:09:21 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_solve(t_list *db, char **brd, int bwid)
{
	int		x;
	int		y;
	int		*mx;

	mx = ft_max(db);
	y = -1;
	if (db->next == NULL)
		return (1);
	while (++y < bwid - mx[0])
	{
		x = -1;
		while (++x < bwid - mx[1])
		{
			if (ft_didplctet(db, brd, y, x))
			{
				if	(!ft_solve(db, brd, bwid))
					ft_unplace((char)db->content_size, brd, bwid);
				else
					return (1);
			}
		}
	}
	return (0);
}

void		ft_unplace(char c, char **brd, int bwid)
{
	int		y;
	int		x;

	y = -1;
	while(++y < bwid)
	{
		x = -1;
		while(++x < bwid)
		{
			if (brd[y][x] == c)
				brd[y][x] = '.';
		}
	}
}

int			*ft_max(t_list *db)
{
	int		i;
	int		xmx;
	int		ymx;
	int		*res;

	i = -1;
	ymx = 0;
	xmx = 0;
	while (++i < 4)
	{
		if (db->crds[i][0] > ymx)
			ymx = db->crds[i][0];
	}
	i = -1;
	while (++i < 4)
	{
		if (db->crds[i][1] > xmx)
			xmx = db->crds[i][1];
	}
	res = ft_newipair(ymx, xmx);
	return (res);
}
