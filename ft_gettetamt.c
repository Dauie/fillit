size_t		ft_gettetamt(char ***tbl)
{
	size_t	i;
	char	***tmp;

	i = 0;
	tmp = tbl;
	while (*tmp)
	{
		i++;
		tmp++;
	}
	return (i);
}
