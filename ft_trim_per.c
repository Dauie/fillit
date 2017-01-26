/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim_per.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 20:10:02 by cfu               #+#    #+#             */
/*   Updated: 2017/01/20 22:27:37 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_trim_per(char *str, char c)
{
	int		i;
	int		count;
	size_t	len;

	i = 0;
	count = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] != c)
			i++;
		else
		{
			count++;
			if (count == 4)
			{
				len = ft_strlen(&str[i]);
				ft_memmove(&str[i], &str[i + 1], len);
				count = 0;
			}
			i++;
		}
	}
}
