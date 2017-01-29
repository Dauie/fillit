
#include "fillit.h"

int		*ft_newipair(int y, int x)
{
	int		*res;

	res = (int*)ft_memalloc(sizeof(int) * 2);
	res[0] = y;
	res[1] = x;
	return (res);
}
