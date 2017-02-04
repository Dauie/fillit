/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 21:56:33 by cfu               #+#    #+#             */
/*   Updated: 2017/02/03 22:51:48 by rlutt            ###   ########.fr       */
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
	while (++y <= bwid - mx[0])
	{
		x = -1;
		while (++x <= bwid - mx[1])
		{
			if (ft_didplctet(db, brd, y, x))
			{
				if ((db->next != NULL))
				{
					db = db->next;
					ft_solve(db, brd, bwid);
				}
				else
					return (0);
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

int		ft_sqrt(int nb)
{
	int	x;
	int sq;

	x = 1;
	sq = 0;
	while (x <= nb / 2)
	{
		sq = x * x;
		if (sq == nb)
			return (x);
		x += 1;
	}
	return (0);
}
