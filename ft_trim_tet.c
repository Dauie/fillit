/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim_tet.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 17:40:27 by cfu               #+#    #+#             */
/*   Updated: 2017/01/27 21:22:03 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_trim_tet(char *str, char c)
{
	int 	src;
	int 	dst;
	int		end;
	size_t	len;

	src = 0;
	dst = 0;
	end = (int)(ft_strlen(str) - 1);
	len = end;
	while (str[src] != c)
		src++;
	if (src != dst)
	{
		while (str[src])
		{
			str[dst] = str[src];
			if (str[src] == '#')
				str[src] = '.';
			dst++;
			src++;
		}
	}
	while (str[end] != c)
		end--;
	end++;
	ft_memset(&str[end], '\0', len - end);
	return (str);
}
