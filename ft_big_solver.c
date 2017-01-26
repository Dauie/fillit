/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_solver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 21:59:55 by cfu               #+#    #+#             */
/*   Updated: 2017/01/25 16:27:42 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_big_solver(char *brd, t_list *tet, int spot)
{
	int		*chars;
	int		off_set;
	int		next;


	chars = ft_getindx(tet->content);
	off_set = ft_getoffset(tet->content);
	next = spot + 1;
	while (tet->content)
	{
		if (ft_solver(brd, chars, off_set, spot) == 1)
		{
			if (tet->next)
				tet = tet->next;
			ft_big_solver(&brd[0], tet, spot);
		}
		else
			ft_put_board(brd,ft_getboardsz(brd));
	}
}
