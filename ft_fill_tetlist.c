/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_tetlist.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 17:41:47 by rlutt             #+#    #+#             */
/*   Updated: 2017/01/25 18:33:59 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list		*ft_fill_tetlist(int fd)
{	
	char	*res;
	int		valid;
	t_list	*tet_list;
	t_list	*res_list;
	int		rbyt;

	rbyt = 21;
	tet_list = ft_lstnew(NULL, 0);
	res_list = tet_list;
	while (rbyt == 21)
	{
		res = ft_gettet(fd, &rbyt);
		valid = 0;
		if ((valid = ft_validate_tets(res)) != -1)
		{
			res = ft_strdup(input_tets[valid]);
			ft_pound_to_letter(res);
			tet_list = ft_list_em(res, tet_list, &valid);
		}
	}
	return (res_list);
}
