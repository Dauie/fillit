/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_tets.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 17:45:30 by cfu               #+#    #+#             */
/*   Updated: 2017/01/27 22:05:55 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_validate_tets(char *str)
{
	int i;
	char *tmp;

	i = 0;
	tmp = ft_strdup(str);
	tmp = ft_trim_tet(tmp);
	while (v_tets[i])
	{
		if (ft_strequ(tmp, v_tets[i]) == 1)
			return (i);
		i++;
	}
	ft_strdel(&tmp);
	return (-1);
}
