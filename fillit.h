/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 15:12:23 by cfu               #+#    #+#             */
/*   Updated: 2017/01/30 19:03:40 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

#define BUFF_SIZE 21
#define MAXTETN 26
#define	DEFBRDSZ 4

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include "libft/libft.h"


static char 	*v_tets[] = {"####", "#....#....#....#", "#....#....##",
							"##...#....#", "##....#....#", "#....#...##",
							"###..#", "###....#", "#....###", "#..###",
							"#....##...#", "#...##....#", "###...#",
							"#...###", "##....##", "##..##", "#....##....#",
							"#...##...#", "##...##"};

int				ft_fillit(char ***tets, size_t tamt);
t_list			*ft_getinputs(int fd);
t_list			*ft_list_em(char **tet, t_list *tlist);
char			*ft_gettet(int fd, size_t *rbyt);
int				**ft_getinxs(char **tet);
int				*ft_newipair(int y, int x);
int				*ft_gettopinxs(char **tet);
int				*ft_getlefinxs(char **tet);
int				*ft_getstart(char **tet);
int				**ft_getcoords(char **tet);
static void		ft_solve(char ***tets, char **brd, int tetn, int bwid);
char			**ft_make_board(size_t size);
void 			ft_put_board(char **brd);
void			ft_initbline(char *bline, size_t len);
static void 	ft_didplctet(char **tet, char **brd, int x, int y);

#endif
