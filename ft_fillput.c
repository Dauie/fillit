/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillput.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 17:49:22 by cfu               #+#    #+#             */
/*   Updated: 2017/02/09 15:52:31 by rlutt            ###   ########.fr       */
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
	ft_putendl_fd("Error", 2);
	return (code);
}
