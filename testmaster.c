
#include "libft/libft.h"

int			*ft_newipair(int y, int x);
int			*ft_gettopinxs(char **tet);
int			**ft_getinxs(char **tet, int y, int x);
int			*ft_getlefinxs(char **tet);
int			*ft_getstart(char **tet);

int			**ft_getinxs(char **tet, int y, int x)
{
	int		**res;
	int		**tmp;
	int		ylen;
	int		xlen;

	ylen = ft_tbllen(tet);
	xlen = ft_strlen(*tet);
	tmp = (int **)ft_memalloc(sizeof(int *) * 4);
	res = tmp;
	y = -1;
	while (++y < ylen)
	{
		x = -1;
		while(++x <= xlen)
		{
			if(tet[y][x] == '#')
			{
				*tmp = ft_newipair(y, x);
				tmp++;
			}
		}
	}
	return (res);
}

int			*ft_gettopinxs(char **tet)
{
	int		y;
	int		x;
	int		ylen;
	int		xlen;
	int		*inxes;

	y = -1;
	inxes = NULL;
	ylen = ft_tbllen(tet);
	xlen = ft_strlen(*tet);
	while (++y < ylen)
	{
		x = -1;
		while(++x < xlen)
		{
			if(tet[y][x] == '#')
			{
				inxes = ft_newipair(y, x);
				return (inxes);
			}
		}
	}
	return (inxes);
}

int			*ft_getlefinxs(char **tet)
{
	int		y;
	int		x;
	int		ylen;
	int		xlen;
	int		*inxes;

	ylen = ft_tbllen(tet);
	xlen = ft_strlen(*tet);
	x = -1;
	inxes = NULL;
	while (++x < xlen)
	{
		y = -1;
		while(++y < ylen)
		{
			if(tet[y][x] == '#')
			{
				inxes = ft_newipair(y, x);
				return (inxes);
			}
		}
	}
	return (inxes);
}

int			*ft_getstart(char **tet)
{
	int		*topi;
	int		*lfti;
	int		*start;

	if (!(topi = ft_gettopinxs(tet)))
		return (NULL);
	ft_putnbr(topi[0]);
	ft_putnbr(topi[1]);
	ft_putchar('\n');
	if (!(lfti = ft_getlefinxs(tet)))
		return (NULL);
	ft_putnbr(lfti[0]);
	ft_putnbr(lfti[1]);
	ft_putchar('\n');
	if (!(start = ft_newipair(topi[0], lfti[1])))
		return (NULL);
	return (start);
}

int			*ft_max(t_list *db)
{
	int		i;
	int		xmx;
	int		ymx;
	int		*res;

	i = -1;
	ymx = 0;
	xmx = 0;
	while (++i < 4)
	{
		if (db->crds[i][0] > ymx)
			ymx = db->crds[i][0];
	}
	i = -1;
	while (++i < 4)
	{
		if (db->crds[i][1] > xmx)
			xmx = db->crds[i][1];
	}
	res = ft_newipair(ymx, xmx);
	return (res);
}


int		*ft_newipair(int y, int x)
{
	int		*res;

	res = NULL;
	res = (int*)ft_memalloc(sizeof(int) * 2);
	res[0] = y;
	res[1] = x;
	return (res);
}

int		main(void)
{
	int i;
	int	**crds;
	int	*res;
	char **ttet;
	char *tet = "....\n....\n...#\n.###\n\n";
	t_list	*db;
	db = (t_list *)ft_memalloc(sizeof(t_list));
	i = -1;
	ttet = ft_strsplit(tet, '\n');
	res = ft_getstart(ttet);
	ft_putnbr(res[0]);
	ft_putnbr(res[1]);
	ft_putchar('\n');
	crds = ft_getinxs(ttet, res[0], res[1]);
	db->crds = crds;
	while (++i < 4)
	{
		ft_putstr("Mino:");
		ft_putnbr(i);
		ft_putchar('\n');
		ft_putnbr(crds[i][0]);
		ft_putnbr(crds[i][1]);
		ft_putchar('\n');
	}
	res = ft_max(db);
	ft_putnbr(res[0]);
	ft_putnbr(res[1]);
	ft_putchar('\n');
}
