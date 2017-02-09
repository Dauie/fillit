/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_didplctet.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 15:06:36 by rlutt             #+#    #+#             */
/*   Updated: 2017/02/08 18:09:49 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_didplctet(t_list *db, char **brd, int y, int x)
{
	if (ft_canplctet(db, brd, y, x) == 1)
	{
		ft_plctet(db, brd, y, x);
		return (1);
	}
	return (0);
}

int			ft_canplctet(t_list *db, char **brd, int y, int x)
{
	int		i;
	int		yc;
	int		xc;
	int		res;

	i = -1;
	res = 0;
	while (++i < 4)
	{
		yc = db->crds[i][0] + y;
		xc = db->crds[i][1] + x;
		if (ft_chkspot(brd, yc, xc))
			res++;
	}
	if (res == 4)
		return (1);
	return (0);
}

int			ft_chkspot(char **brd, int y, int x)
{
	if (brd[y][x] == '.')
		return (1);
	return (0);
}

void		ft_plctet(t_list *db, char **brd, int y, int x)
{
	int		i;
	int		yc;
	int		xc;
	char	c;

	i = -1;
	c = (char)db->content_size;
	while (++i < 4)
	{
		yc = db->crds[i][0] + y;
		xc = db->crds[i][1] + x;
		brd[yc][xc] = c;
	}
}
