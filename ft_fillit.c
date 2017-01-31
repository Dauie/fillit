/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 17:18:05 by cfu               #+#    #+#             */
/*   Updated: 2017/01/30 20:44:31 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			main(int ac, char **av)
{
	int 	fd;
	t_list 	db;
	size_t	tamt;

	fd = 0;
	tamt = 0;
	if (ac > 1)
	{
		fd = open(av[1], O_RDONLY);
		if (!(db = ft_get_inputs(fd))
			return (-1); //error return
		tamt = ft_lstlen(db);
		ft_fillit(db, tamt);
	}
	return (0);
}

int			ft_fillit(char ***tets, size_t tamt)
{
	char 	**brd;

	if (!(brd = ft_make_board(DEFBRDSZ));
		return (-1); //ft_puterror
	while (!(ft_solve(tets, brd, 0)) )
	return (0);
}


char		**ft_make_board(size_t size)
{
	size_t		i;
	char	**brd;
	char	**tmp;

	i = -1;
	tmp = (char **)ft_memalloc(sizeof(char *) * (size + 1));
	brd = tmp;
	while (++i < size)
	{
		*tmp = (char *)ft_memalloc(sizeof(char) * size);
		ft_initbline(*tmp, size);
		tmp++;
	}
	return (brd);
}
