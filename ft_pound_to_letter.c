/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pound_to_letter.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 16:45:57 by cfu               #+#    #+#             */
/*   Updated: 2017/01/27 21:25:16 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_pound_to_letter(char *str)
{
	int			i;
	static int	al;
	int			len;

	if (!al)
		al = 0;
	i = 0;
	len = ft_strlen(str);
	while (i < len)
	{
		if (str[i] == '#')
			str[i] = 'A' + al;
		i++;
	}
	al++;
}
