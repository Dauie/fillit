/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 16:48:11 by cfu               #+#    #+#             */
/*   Updated: 2017/01/17 21:38:32 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_strnew(size_t size)
{
	char *str;

	size++;
	str = (char*)malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	else
	{
		while (size)
		{
			size--;
			str[size] = '\0';
		}
		return (str);
	}
}
