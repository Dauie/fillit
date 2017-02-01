/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 21:56:33 by cfu               #+#    #+#             */
/*   Updated: 2017/01/31 19:29:09 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		 ft_solve(t_list *db, char **brd, int bwid)
{
	int	x;
	int	y;

	y = -1;
	while (++y < bwid)
	{
		x = -1;
		while (++x < bwid)
		{
			if (ft_didplctet(db, brd, y, x))
			{
				if ((db->next != NULL))
				{
					db = db->next;
					ft_solve(db, brd, bwid);
				}
				else
					ft_putboard(brd);
			}
		}
	}
	return (0);
}
