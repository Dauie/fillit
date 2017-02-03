/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 21:56:33 by cfu               #+#    #+#             */
/*   Updated: 2017/02/02 23:29:47 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_solve(t_list *db, char **brd, int bwid)
{
	int		x;
	int		y;
	int		ym;
	int		xm;

	y = -1;
	ym = db->crds[4][]
	while (++y < bwid - 1)
	{
		x = -1;
		while (++x <= bwid)
		{
			if (ft_didplctet(db, brd, y, x))
			{
				if ((db->next != NULL))
				{
					db = db->next;
					if (!ft_solve(db, brd, bwid))
						ft_unplace(db, brd);
				}
				else
					return (1);
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

int		*ft_max(t_list *db, int x, int y)
{
	int smx;
	int smy;

	smy = db->crds[0][0] +  db->crds[1][0] + db->crds[2][0] + db->crds[3][0];
	smx = db->crds[0][1] +  db->crds[1][1] + db->crds[2][1] + db->crds[3][1];
	smy += smx;
	return (ft_sqrt(smy));
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
