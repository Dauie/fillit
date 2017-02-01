//puterror.c

#include "fillit.h"

void ft_putboard(char **brd)
{
	int		i;

	i = 0;
	while (brd[i])
	{
		ft_putendl(brd[i]);
		i++;
	}
}
