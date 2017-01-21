/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 18:59:01 by cfu               #+#    #+#             */
/*   Updated: 2017/01/16 21:22:16 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_strrchr(const char *s, int c)
{
	char *str;
	char *p;

	str = (char *)s;
	p = NULL;
	if (c == '\0')
	{
		while (*str)
			str++;
		return (str);
	}
	if (ft_strlen(s) == 0 || *s == '\0')
		return (NULL);
	while (*str)
	{
		if (*str == c)
			p = str;
		str++;
	}
	return (p);
}
