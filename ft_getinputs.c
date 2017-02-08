#include "fillit.h"

t_list			*ft_getinputs(int fd)
{
	t_list		*db;
	t_list		*tmp;
	char		*tet;
	char		**ttmp;
	int			linum;

	db = ft_lstnew(NULL, 0);
	tmp = db;
	db->rbyt = 21;
	ttmp = NULL;
	while (db->rbyt == 21)
	{
		tet = ft_gettet(fd, &db->rbyt);
		if ((linum = ft_validate_tets(tet)) != -1)
		{
			tmp = ft_list_em(linum, ttmp);
		}
		ft_strclr(tet);
	}
	ft_strdel(&tet);
	ft_strdel(ttmp);
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
	if (!(crds = ft_getcoords(linum)
	crntnd = ft_lstcrdsnew(crds, (sizeof(int) * 8), ('A' + c++));
	if (db->crds == NULL)
	{
		db->crds = ft_crddup(crds);
		db->content_size = 'A';
	}
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
		tmp[i] = '.';
}

int				**ft_getcoords(int linum)
{
	int			xy;
	int			**res;
	int			**crds;


	crds = ft_memalloc(sizeof(int *) * 4)
	res = crds;
	ln = -1;
	while (++xy < 4)
	{
		*crds = ft_newipair(cy[lium][xy], cx[linum][xy])
		crds++;
	}
	return (res);
}

void	*ft_crddup(int **crds)
{
	int		i;
	int		**res;
	int		**tmp;

	i = -1;
	tmp = (int **)ft_memalloc(sizeof(int*) * ft_itbllen(crds));
	res = tmp;
	while (++i < 4)
	{
		*tmp = ft_memalloc(sizeof(int) * 2);
		ft_memcpy(*tmp, *crds, sizeof(int) * 2);
		tmp++;
		crds++;
	}
	return (res);
}
