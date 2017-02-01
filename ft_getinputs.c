#include "fillit.h"

t_list			*ft_getinputs(int fd)
{
	t_list		*db;
	t_list		*tmp;
	char		*tet;
	char		**ttmp;

	db = ft_lstnew(NULL, 0);
	tmp = db;
	db->rbyt = 21;
	ttmp = NULL;
	while (db->rbyt == 21)
	{
		tet = ft_gettet(fd, &db->rbyt);
		if ((ft_validate_tets(tet)) != -1)
		{
			ttmp = ft_strsplit(tet, '\n');
			tmp = ft_list_em(tmp, ttmp);
			ft_strdel(&tet);
			ft_strdel(ttmp);
		}
	}
	return (db);
}

char			*ft_gettet(int fd, size_t *rbyt)
{
	char		*tet;

	tet = ft_strnew(BUFF_SIZE);
	*rbyt = read(fd, tet, BUFF_SIZE);
	return (tet);
}

t_list			*ft_list_em(t_list *db, char **tet)
{
	static int	c;
	int 		**crds;
	t_list		*crntnd;

	crntnd = NULL;
	if (!c)
		c = 0;
	if (!(crds = ft_getcoords(tet)))
		return (NULL);
	if (*crds)
		crntnd = ft_lstnewstak(crds, ('A' + c++));
	if (db->crds == NULL)
		db->crds = crds;
	else
		ft_lsteadd(&db, crntnd);
	return (db);
}

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
}

int				**ft_getcoords(char **tet)
{
	int			**crds;
	int			*s;

	crds = NULL;
	if (!(s = ft_getstart(tet)))
		return (NULL);
	tet += s[0];
	*tet += s[1];
	if (!(crds = ft_getinxs(tet)))
		return (NULL);
	return (crds);

}
