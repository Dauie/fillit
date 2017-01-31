/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_didplctet.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 15:06:36 by rlutt             #+#    #+#             */
/*   Updated: 2017/01/30 20:42:07 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void ft_didplctet(t_list *db, char **brd, int x, int y)
{
	if (ft_canplctet(tets, brd, x, y) == 1)
		ft_plctet(tet, brd, x, y);
	else
		return (0);
}

int			ft_canplctet(t_list *db, char **brd, int x, int y)
{
	int		i;
	int		*s;
	int		**crds;

	while (++i < 4)
	{

	}

}


void		ft_plctet(char **tet, char **brd, int x, int y)
{
	//actually places the tet to board, after spot has been verified.
}

int			ft_chkspot(int *crds, char **brd)
{

}
