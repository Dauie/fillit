/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 15:12:23 by cfu               #+#    #+#             */
/*   Updated: 2017/01/28 03:30:08 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

#define BUFF_SIZE 21

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include "libft/libft.h"


static char *v_tets[] = {"####", "#....#....#....#", "#....#....##",
						"##...#....#", "##....#....#", "#....#...##",
						"###..#", "###....#", "#....###", "#..###",
					   	"#....##...#", "#...##....#", "###...#",
					   	"#...###", "##....##", "##..##", "#....##....#",
					   	"#...##...#", "##...##"};

void 				ft_repchar(char *str, char o, char n, int	max);
char				*ft_gettet(int fd, size_t *rbyt);
char				*ft_trim_tet(char *str, char c);
char				*ft_put_board(char *str, size_t size);
char				*ft_make_board(size_t size);
int					ft_validate_tets(char *str);
void				ft_pound_to_letter(char *str);
int					ft_list_size(t_list *begin_list);
char				***ft_getinputs(int fd);
size_t				ft_gettetamt(char ***tbl);
int					***ft_getinxs(char ***tet, int ntet);

#endif
