/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placetet.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 22:55:43 by cfu               #+#    #+#             */
/*   Updated: 2017/01/23 20:26:28 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_canplc(char *brd, char *tet)
{
	int ret;
	int spot;
	int len;
	int i;
	
	i = 0;
	ret = 0;
	spot = 0;
	len = ft_strlen(brd);
	while (i < len)
	{
		if ((ret = ft_checkspot(brd, test, spot) == 1))
			return (spot);
		i++;
	}
	return (spot);
}



int		ft_checkspot(char *brd, char *tet, int spot)
{
	int		b;
	int		t;
	int		count;
	char	*ptr;

	b = 0;
	t = 0;
	count = 0;
	ptr = brd[b];
	while (brd[b])
	{
		if (brd[b++] == '.' && tet[t++] != '.')
			count++;
		if (brd[b] != '\n' && tet[t] != '.')
			ft_checkspot();
		if (brd[b] != '.' && tet[t] != '.')

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
