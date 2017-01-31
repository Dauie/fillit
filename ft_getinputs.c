#include "fillit.h"

t_list			*ft_getinputs(int fd)
{
	t_list		*db;
	t_list		*tmp;
	char		*tet;
	char		**ttmp;

	db = ft_listnew(NULL, 0);
	tmp = db;
	db.rbyt = 21;
	while (db.rbyt == 21)
	{
		tet = ft_gettet(fd, &db.rbyt);
		if ((ft_validate_tets(tet)) != -1)
		{
			*ttmp = (char **)ft_memalloc(sizeof(char *) * 5);
			*ttmp = ft_strsplit(tet, '\n');
			tmp = ft_list_em(tet, tmp);
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

t_list			*ft_list_em(char **tet, t_list *db)
{
	static int	c;
	int 		**crds;
	t_list		*crntnd;

	if (!c)
		c = 0;
	if (!(crds = ft_getcoords(tet))
		return (NULL);
	crntnd = NULL;
	if (*crds)
		crntnd = ft_lstnewstak(cords, ('A' + c++));
	if (db->content == NULL)
		db>content = (void *)crds;
	else
		ft_lsteadd(&tlist, crntnd);
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

int			**ft_getcoords(char **tet)
{
	int		**crds;
	int		*s;

	if (!(s = ft_getstart(tet)))
		return (NULL);
	if (!(ft_getinxs(tet[s[0]][s[1]])))
		return (NULL);
	return (crds);

}
