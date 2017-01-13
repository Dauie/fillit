#include "fillit.h"
#include <stdio.h>

char		*ft_gettet(int fd)
{
	char	*tet;
	size_t	rbyt;


	tet = ft_strnew(BUFF_SIZE);
	rbyt = read(fd, tet, BUFF_SIZE);
	ft_plcbrs(tet);
	return (tet);
}

static void	ft_plcbrs(char *str)
{
	int		i;

	i = 0;
	while (i <= 21)
	{
		if ((i % 5 == 0 || i == 21) && str[i] == '\n')
			str[i] = '|';
		i++;
	}
}


int		main(int argc, char **argv)
{
	char	*line;
	int		fd;
	int		res;
	int		num;

	res = 0;
	num = 0;
	line = NULL;
	argc = 0;
	fd = open(argv[1], O_RDONLY);
	char *res = ft_strnew(sizeof(char) * BUFF_SIZE);
	res = ft_gettet(fd);
	ft_putstr(res);
	return ()

}
