/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 21:56:33 by cfu               #+#    #+#             */
/*   Updated: 2017/01/27 22:46:18 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
static void ft_solve(char ***tets, char **brd, int maxtets, int ntets)
{
	int	x;
	int	y;

	y = -1;
	while (++y < bwid)
	{
		x = -1;
		while (++x < bwid)
		{
			if (ft_placetet(map, y, x, tets[tetn]))
			{
				if ((tetn + 1) != maxtets)
					ft_solve(tets, map, maxtets, (tetn + 1));
				else
					ft_putboard(brd);
				ft_alldelete();
			}
		}
	}
}
