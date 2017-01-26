/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getoffset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 21:23:38 by cfu               #+#    #+#             */
/*   Updated: 2017/01/25 00:29:47 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*ft_getoffset(char *str)
{
	int	i;
	int *arr;
	int len;
	int	count;

	i = 0;
	len = ft_strlen(str) - 1;
	count = 0;
	while (str[i++] == '.')
		count++;
	while (str[len--] == '.')
		count++;
	if (!(arr = (int *)ft_memalloc(sizeof(int) * count)))
		return (NULL);
	i = 0;
	len = ft_strlen(str) - 1;
	while (str[i] == '.')
	{
		arr[i] = i;
		i++;
	}
	while (str[len] == '.')
		arr[i++] = len--;
	return (arr);
}
