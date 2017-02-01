/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inxes.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 03:01:07 by rlutt             #+#    #+#             */
/*   Updated: 2017/02/01 01:51:33 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			**ft_getinxs(char **tet)
{
	int		**res;
	int		**tmp;
	int		x;
	int		y;

	tmp = (int **)ft_memalloc(sizeof(int *) * 4);
	res = tmp;
	y = -1;
	while (++y < 4)
	{
		x = -1;
		while((tet[y][x] == '#' || tet[y][x] == '.') && ++x < 4)
		{
			if(tet[y][x] == '#')
			{
				*tmp = ft_newipair(y, x);
				tmp++;
			}
		}
		x = 0;
	}
	return (res);
}

int			*ft_gettopinxs(char **tet)
{
	int		x;
	int		y;
	int		*inxes;

	y = -1;
	inxes = NULL;
	while (++y < 4)
	{
		x = -1;
		while(++x < 4)
		{
			if(tet[y][x] == '#')
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
	int		x;
	int		y;
	int		*inxes;

	x = -1;
	inxes = NULL;
	while (++x < 4)
	{
		y = -1;
		while(++y < 4)
		{
			if(tet[y][x] == '#')
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


int		*ft_newipair(int y, int x)
{
	int		*res;

	res = NULL;
	res = (int*)ft_memalloc(sizeof(int) * 2);
	res[0] = y;
	res[1] = x;
	return (res);
}
