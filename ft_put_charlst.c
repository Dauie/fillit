/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 19:50:30 by rlutt             #+#    #+#             */
/*   Updated: 2017/01/19 19:51:33 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_put_charlst(t_list *lst)
{
	t_list *tmp;

	tmp = lst;

	while (tmp)
	{
		ft_putendl(tmp->content);
		tmp = tmp->next;
	}
}

