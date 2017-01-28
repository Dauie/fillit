/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getinxs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 03:01:07 by rlutt             #+#    #+#             */
/*   Updated: 2017/01/28 03:19:12 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		***ft_getinxs(char ***tet, int ntet)
{
	int		i;
	int		x;
	int		y;
	int		***res;

	i = 0;
	x = 0;
	y = 0;
	res = (int ***)ft_memalloc(sizeof(int) * ((2 * 4) * ntet));
	while (i < ntet)
	{
		while (x < 4)
		{
			if(ft_isalpha(tet[x][y] == 0))
			{
				res[i][x][y] = tet[x][y];
				y++;
			}
			x++;
		}
		i++;
	}
	return (res);
}
