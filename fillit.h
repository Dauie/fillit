/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 15:12:23 by cfu               #+#    #+#             */
/*   Updated: 2017/01/25 18:39:17 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

#define BUFF_SIZE 21

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>

typedef struct		s_list
{
	void			*content;
	size_t			*content_size;
	int				*off_set;
	int				*char_spot;
	struct s_list	*next;
}					t_list;

int	 off_sets[][2] ={ {}, {}, {}, {9}, {}, {0}, {5, 6},
				{}, {}, {0, 1}, {9}, {0}, {6}, {0}, {},
				{0, 6}, {10 ,11}, {0, 9},{} };

int	 char_spots[][4] = {{0, 1, 2, 3}, {0, 4, 8, 12}, {0, 4, 8, 9}, 
					{0, 1, 4, 8}, {0, 1, 5, 9}, {1, 5, 8, 9}, 
					{0, 1, 2, 4}, {0, 1, 2, 6}, {0, 4, 5, 6},
					{2, 4, 5, 6}, {0, 4, 5, 8}, {1, 4, 5, 9},
					{0, 1, 2, 5}, {1, 4, 5, 6}, {0, 1, 5, 6},
					{1, 2, 4, 5}, {0, 4, 5, 9}, {1, 4, 5, 8},
					{0, 1, 4, 5}};

static char	*input_tets[] = {"####", "#...#...#...#", "#...#...##", 
							"##..#...#.", "##...#...#", ".#...#..##", 
							"###.#..", "###...#", "#...###", "..#.###", 
							"#...##..#.", ".#..##...#", "###..#.", 
							".#..###", "##...##", ".##.##.", "#...##...#..",
							".#..##..#.", "##..##"};

static char *v_tets[] = {"####", "#....#....#....#", "#....#....##",
						"##...#....#", "##....#....#", "#....#...##",
						"###..#", "###....#", "#....###", "#..###",
					   	"#....##...#", "#...##....#", "###...#",
					   	"#...###", "##....##", "##..##", "#....##....#",
					   	"#...##...#", "##...##"};

int					ft_gettag(char *str);
t_list				*ft_fill_tetlist(int fd);
void 				ft_repchar(char *str, char o, char n, int max);
char				*ft_gettet(int fd, size_t *rbyt);
char				*ft_trim_tet(char *str, char c);
char				*ft_strnew(size_t size);
size_t				ft_strlen(const char *s);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				*ft_memmove(void *dst, const void *src, size_t len);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *b, int c, size_t len);
int					ft_validate_tets(char *str);
int					ft_strequ(char const *s1, char const *s2);
void				ft_putnbr(int n);
void				ft_pound_to_letter(char *str);
int					ft_fillit(t_list *db);
int					ft_list_size(t_list *begin_list);
void				ft_putchar_lst(t_list *begin_list);
t_list				*ft_list_em(char *str, t_list *tet_list, int *valid);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lsteadd(t_list **alst, t_list *nw);
void				*ft_memalloc(size_t size);
void				*ft_memcpy(void *dst, const void *src, size_t n);
char				*ft_strdup(const char *s1);
char				*ft_put_board(char *str, size_t size);
char				*ft_make_board(size_t size);
size_t				ft_getboardsz(int size);
void				ft_trim_per(char *str, char c);
int					*ft_getindx(char *str);
int					ft_solver(char *brd, int *chars, int off_set, int spot);


#endif
