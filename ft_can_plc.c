/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_can_plc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 20:31:53 by cfu               #+#    #+#             */
/*   Updated: 2017/01/23 20:32:19 by cfu              ###   ########.fr       */
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

