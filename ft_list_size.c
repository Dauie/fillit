/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 21:34:56 by cfu               #+#    #+#             */
/*   Updated: 2017/01/18 21:37:32 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_list_size(t_list *begin_list)
{
	int	count;

	count = 0;
	if (begin_list)
	{
		while (begin_list)
		{
			begin_list = begin_list->next;
			count++;
		}
	}
	return (count);
}
