/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillput.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 17:49:22 by cfu               #+#    #+#             */
/*   Updated: 2017/02/26 16:45:47 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_putboard(char **brd, int bwid)
{
	int		i;

	i = 0;
	while (i < bwid)
	{
		ft_putendl(brd[i]);
		i++;
	}
}

int			error(int code)
{
	if (code == 1)
		ft_putendl("error");
	else if (code == 2)
		ft_putendl("usage: ./fillit target_file");
	else if (code == 3)
		ft_putendl("Blah");
	return (-1);
}
