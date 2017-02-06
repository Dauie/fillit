/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 21:56:33 by cfu               #+#    #+#             */
/*   Updated: 2017/02/06 15:40:01 by rlutt            ###   ########.fr       */
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
	ft_putboard(brd, bwid);
	while (++y < bwid - mx[0])
	{
		x = -1;
		while (++x < bwid - mx[1])
		{
			if (ft_didplctet(db, brd, y, x))
			{
				if ((db->next != NULL))
				{
					ft_putboard(brd, bwid);
					db = db->next;
					ft_solve(db, brd, bwid);
				}
				else
				{
					ft_putboard(brd, bwid);
					return (1);
				}
			}
		}
	}
	return (0);
}

void		ft_unplace(t_list *db, char **brd)
{
	int		y;
	int		x;
	char	**tmp;

	tmp = brd;
	y = -1;
	while(tmp[++y])
	{
		x = -1;
		while(tmp[y][++x])
		{
			if (tmp[y][x] == (char)db->content_size)
				tmp[y][x] = '.';
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
