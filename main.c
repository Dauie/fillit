int			main(int ac, char **av)
{
	int 	fd;
	char 	***tets;
	size_t	tamt;

	fd = 0;
	tets = NULL;
	tamt = 0;
	if (ac > 1)
	{
		fd = open(av[1], O_RDONLY);
		if (!(tets = ft_get_inputs(fd))
			return (-1); //error return
		tamt = ft_gettetamt(tets);
		ft_fillit(tets, tamt);
	}
	return (0);
}
