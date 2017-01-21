/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 20:35:12 by cfu               #+#    #+#             */
/*   Updated: 2017/01/17 21:33:05 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*s2;
	char	*p;

	len = ft_strlen(s1);
	s2 = ft_strnew(len);
	p = s2;
	if (!s2)
		return (NULL);
	if (s1 == 0)
		return (0);
	while (len > 0)
	{
		*s2 = *s1;
		s2++;
		s1++;
		len--;
	}
	*s2 = '\0';
	return (p);
}
