/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_board.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 17:36:46 by cfu               #+#    #+#             */
/*   Updated: 2017/01/23 16:58:31 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		*ft_make_board(size_t size)
{
	size_t	i;
	int		n;
	size_t	total_size;
	char	*str;

	i = 0;
	n = 1;
	total_size = (size * size + size);
	if (!(str = ft_strnew(total_size)))
		return (NULL);
	while (i < total_size)
	{
		if (n % (size + 1) == 0)
		{
			str[i++] = '\n';
			n++;
		}
		else
		{
			str[i++] = '.';
			n++;
		}
	}
	str[i] = '\0';
	return (str);
}
