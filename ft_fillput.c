//puterror.c

#include "fillit.h"

void ft_putboard(char **brd, int bwid)
{
	int		i;

	i = 0;
	while (i < bwid)
	{
		ft_putendl(brd[i]);
		i++;
	}
}


/*int		error(void)
{
	ft_putstr()
}*/
