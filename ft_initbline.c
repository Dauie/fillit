
#include "fillit.h"

void 			ft_initbline(char *bline, size_t len)
{
	size_t		i;
	char		*tmp;

	tmp = bline;
	i = -1;
	while (++i < len)
	{
		*tmp = '.';
		tmp++;
	}
	*tmp = '\n';
}
