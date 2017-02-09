/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_tets.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 17:45:30 by cfu               #+#    #+#             */
/*   Updated: 2017/02/09 14:16:33 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_validate_tets(char *str)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = ft_strdup(str);
	ft_repchar(tmp, '\n', '.', BUFF_SIZE);
	while (v_tets[i])
	{
		if (ft_strequ(tmp, g_vtets[i]) == 1)
			return (i);
		i++;
	}
	ft_strdel(&tmp);
	return (-1);
}

void		ft_repchar(char *str, char o, char n, int max)
{
	int		i;

	i = 0;
	while (i <= max)
	{
		if ((i == 4 || i == 9 || i == 14 || i >= 19) && str[i] == o)
			str[i] = n;
		i++;
	}
	ft_trim_tet(str, '#');
}

char		*ft_trim_tet(char *str, char c)
{
	int		src;
	int		dst;
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
