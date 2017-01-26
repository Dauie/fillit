/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 21:56:33 by cfu               #+#    #+#             */
/*   Updated: 2017/01/25 18:15:46 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_solver(char *brd,  int spot)
{
	int		next;
	int		a;
	int		o;

	next = spot + 1;
	a = 0;
	o = 0;
	while (brd[spot])
	{
		while (chars[a])
		{
			if (a < 4 || (a > 3 && a < 8) || (a > 7 && a < 12)
				   	|| (a > 11 && a < 16))
				brd[spot] = ft_strchr(brd[spot], '\n') + 1;
			if (brd[spot + a] == '.')
				a++;
			if (brd[spot + a] != '.')
				ft_solver(&brd[next], chars, off_set, spot);
			if (brd[spot + o])
				o++;
			else
				return (0);
		}
	}
	return (1);
}

