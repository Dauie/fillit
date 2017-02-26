/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 17:18:05 by cfu               #+#    #+#             */
/*   Updated: 2017/02/26 14:06:15 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			main(int ac, char **av)
{
	int		fd;
	t_list	*db;
	size_t	tamt;

	fd = 0;
	tamt = 0;
	if (ac > 1 && ac < 3)
	{
		fd = open(av[1], O_RDONLY);
		if (!(db = ft_getinputs(fd)))
			return (error(1));
		tamt = ft_lstlen(db);
		ft_fillit(db, tamt);
	}
	else
		return (error(2));
	return (0);
}

int			ft_fillit(t_list *db, int tamt)
{
	char	**brd;
	int		bwid;

	bwid = 2;
	while (bwid * bwid < tamt * 4)
		bwid++;
	if (!(brd = ft_makeboard(bwid)))
		return (-1);
	while ((ft_solve(db, brd, bwid)) == 0)
		if (!(brd = ft_makeboard(++bwid)))
			return (error(1));
	ft_putboard(brd, bwid);
	return (0);
}

char		**ft_makeboard(size_t size)
{
	size_t		i;
	char		**brd;
	char		**tmp;

	i = -1;
	if (!(tmp = (char **)ft_memalloc(sizeof(char *) * size)))
		return (NULL);
	brd = tmp;
	while (++i < size)
	{
		if (!(*tmp = (char *)ft_strnew(sizeof(char) * size)))
			return (NULL);
		ft_initbline(*tmp, size);
		tmp++;
	}
	return (brd);
}
