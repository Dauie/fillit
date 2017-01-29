/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_board.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 17:36:46 by cfu               #+#    #+#             */
/*   Updated: 2017/01/28 21:21:30 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**ft_make_board(size_t size)
{
	size_t		i;
	char	**brd;
	char	**tmp;

	i = -1;
	tmp = (char **)ft_memalloc(sizeof(char *) * (size + 2));
	brd = tmp;
	while (++i < size)
	{
		*tmp = (char *)ft_memalloc(sizeof(char) * size);
		ft_initbline(*tmp, size);
		tmp++;
	}
	return (brd);
}
