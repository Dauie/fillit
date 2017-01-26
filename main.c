/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 17:11:31 by cfu               #+#    #+#             */
/*   Updated: 2017/01/25 18:07:53 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int		fd;
	t_list	*db;

	if (argc < 1)
		return (-1);
	fd = open(argv[1], O_RDONLY);
	db = ft_fill_tetlist(fd);
	ft_fillit(db);
	return (0);
}
