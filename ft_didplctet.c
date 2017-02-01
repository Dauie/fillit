/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_didplctet.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 15:06:36 by rlutt             #+#    #+#             */
/*   Updated: 2017/02/01 00:53:41 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		 ft_didplctet(t_list *db, char **brd, int y, int x)
{
	brd += y;
	*brd += x;
	if (ft_canplctet(db, brd) == 1)
	{
		ft_plctet(db, brd);
		return (1);
	}
	return (0);
}

int			ft_canplctet(t_list *db, char **brd)
{
	int		i;
	int		res;

	i = -1;
	res = 0;
	while (++i < 4)
	{
		if (ft_chkspot(brd, db->crds[i][0], db->crds[i][1]))
			res++;
		i++;
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

void		ft_plctet(t_list *db, char **brd)
{
	int 	i;

	i = -1;
	while (++i < 4)
	{
		brd[db->crds[i][0]][db->crds[i][1]] = (char)db->content_size;
		i++;
	}
}
