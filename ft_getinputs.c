#include "fillit.h"

char		***ft_getinputs(int fd)
{
	char	*tmp;
	char	***ttmp;
	char	***res;

	size_t	rbyt;

	rbyt = 21;
	ttmp = (char ***)ft_memalloc(sizeof(char **) * (MAXTETN + 1));
	res = ttmp;
	while (rbyt == 21)
	{
		tmp = ft_gettet(fd, &rbyt);
		if ((ft_validate_tets(tmp)) != -1)
		{
			*ttmp = (char **)ft_memalloc(sizeof(char *) * 6);
			ft_pound_to_letter(tmp);
			*ttmp = ft_strsplit(tmp, '\n');
			ft_strdel(&tmp);
		}
		ttmp++;
	}
	return (res);
}
