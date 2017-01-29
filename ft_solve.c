/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 21:56:33 by cfu               #+#    #+#             */
/*   Updated: 2017/01/28 22:09:04 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
static void ft_solve(char ***tets, char **brd, int tetn, int bwid)
{
	int	x;
	int	y;

	y = -1;
	while (++y < bwid)
	{
		x = -1;
		while (++x < bwid)
		{
			if (ft_canplctet(brd, y, x, tets[tetn]))
			{
				if ((tetn + 1) != MAXTETN)
					ft_solve(tets, brd, MAXTETN, (tetn + 1));
				else
					ft_putboard(brd);
			}
		}
	}
}
