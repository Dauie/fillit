/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkspot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 20:28:10 by cfu               #+#    #+#             */
/*   Updated: 2017/01/23 22:21:13 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_checkspot(char *brd, int	*arr, int spot)
{
	int		b;
	int		count;

	b = 0;
	count = 0;
	if (brd[spot] == '.'


	while (brd[b])
	{
		t = 0;
		count = 0;
		while (tet[t])
		{
			if (brd[b++] == '.' && tet[t++] != '.')
				count++;
			if (brd[b] != '\n' && tet[t] != '.')
				ft_checkspot(&brd[b + 1], tet);
			if (brd[b] != '.' && tet[t] != '.')
				ft_checkspot(&brd[b + 1], tet);
			if (brd[b++] == '.' && tet[t] == '.')
				t++;
			if (brd[b++] != '.' && tet[t] == '.')
				t++;
			if (count == 4)
				return (1);
			else
				return (0);
		}
	}
}

int		main(void)
{
	int	i;

	i = ft_checkspot("ABB.AABBA.......", "C...CCC");
	ft_putnbr(i);
}
