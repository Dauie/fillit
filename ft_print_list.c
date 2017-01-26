/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 21:37:48 by cfu               #+#    #+#             */
/*   Updated: 2017/01/18 22:14:34 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_print_list(t_list *begin_list)
{
	if (begin_list)
	{
		while (begin_list)
		{
			ft_putstr(begin_list->content);
			ft_putchar('\n');
			begin_list = begin_list->next;
		}
	}
}
