#include "fillit.h"
#include <stdio.h>
/*
int			main(int ac, char **av)
{
	int **test;
	char ***tets;
	size_t	rbyt;
	int		fd;
	int		i;

	i = -1;
	test = NULL;
	if (ac > 1)
	{
		fd = open(av[1], O_RDONLY);
		rbyt = 21;
		tets = ft_getinputs(fd);
	}
	return (0);
}
*/

int		main(void)
{
	char **brd;
	int i;

	i = 0;

	brd = ft_make_board(4);
	while(*brd)
	{
		printf("%s", *brd);
		brd++;
	}
	return (0);
}
