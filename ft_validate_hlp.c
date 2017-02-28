/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_hlp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 15:49:08 by rlutt             #+#    #+#             */
/*   Updated: 2017/02/27 16:27:55 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_checklines(char *str, char c)
{
	int		cnt;
	char	*tmp;

	tmp = str;
	cnt = -1;
	while (++cnt < 4)
		if (chkline(tmp))
			tmp += 5;
	if (*tmp == c || *tmp == '\n')
		return (1);
	else
		return (0);
}

int			chkline(char *line)
{
	int		i;

	i = -1;
	while (++i < 4)
		if (!(ft_iscool(line[i])))
			return (0);
	if (line[i] == '\n')
		return (1);
	else
		return (0);
}

int			ft_iscool(int c)
{
	if (c == '.' || c == '#')
		return (1);
	else
		return (0);
}
