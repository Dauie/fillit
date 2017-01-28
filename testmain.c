#include "fillit.h"
#include <stdio.h>

int			main(int ac, char **av)
{
	int ***test;
	char ***tets;
	size_t	rbyt;
	int		ntet;
	int		fd;
	if (ac > 2)
	{
		fd = open(av[1], O_RDONLY);
		rbyt = 21;
		tets = ft_getinputs(fd);
		ntet = ft_gettetamt(tets);
		test = ft_getinxs(tets, ntet);
	}
	return (0);
}
