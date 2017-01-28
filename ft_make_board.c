/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_board.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 17:36:46 by cfu               #+#    #+#             */
/*   Updated: 2017/01/27 21:48:11 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**ft_make_board(size_t size)
{
	int		i;
	char	**brd;
	char	**tmp;

	brd = (char **)ft_memalloc(sizeof(char *) * (size + 1));
	tmp = brd;
	while (i < size)
	{
		tmp = (char *)ft_strnew(sizeof(char) * size);
		ft_memset(tmp, '.', size);
		tmp++;
	}
	return (brd);
}
