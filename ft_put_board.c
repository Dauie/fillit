/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_board.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 17:44:17 by cfu               #+#    #+#             */
/*   Updated: 2017/01/20 19:15:22 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		*ft_put_board(char *str, size_t size)
{
	char	*res;
	int		s;
	int		d;
	size_t	counter;

	res = ft_strnew(size * size + size + 1);
	s = 0;
	d = 0;
	counter = size;
	if (str)
	{
		while (str[s])
		{
			counter = size;
			while (counter > 0)
			{
				res[d++] = str[s++];
				counter--;
			}
			res[d++] = '\n';
		}
	}
	res[d] = '\0';
	return (res);
}
