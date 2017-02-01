/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_didplctet.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 15:06:36 by rlutt             #+#    #+#             */
/*   Updated: 2017/01/31 21:51:43 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		 ft_didplctet(t_list *db, char **brd, int y, int x)
{
	if (ft_canplctet(db, brd, y, x) == 1)
	{
		ft_plctet(db, brd);
		return (1);
	}
	return (0);
}

int			ft_canplctet(t_list *db, char **brd, int y, int x)
{
	int		i;
	int		res;
	char	**tmp;

	i = -1;
	res = 0;
	tmp = brd;
	tmp += y;
	*tmp += x;
	while (++i < 4)
	{
		if (ft_chkspot(tmp, (*db).content[i][0], (*db).content[i][1]))
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

void		ft_plctet(char **brd, t_list *db, int x, int y)
{
	int 	i;
	char	**tmp;

	i = -1;
	while (++i < 4)
	{
		brd[db->content[0]][db->content[1]] = (char)db->content_size;
		i++;
	}
}
