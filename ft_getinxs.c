/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getinxs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 03:01:07 by rlutt             #+#    #+#             */
/*   Updated: 2017/01/28 20:13:05 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		**ft_getinxs(char **tet)
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
		while(++x < 4)
		{
			if((ft_isalpha(tet[y][x]) == 1))
			{
				*tmp = ft_newipair(y, x);
				tmp++;
			}
		}
		x = 0;
	}
	return (res);
}
