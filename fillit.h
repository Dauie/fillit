/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 15:12:23 by cfu               #+#    #+#             */
/*   Updated: 2017/01/19 20:05:36 by rlutt            ###   ########.fr       */
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
	struct s_list	*next;
}					t_list;

static char *v_tets[] = {"####", "#....#....#....#", "#....#....##",
						"##...#....#", "##....#....#", "#....#...##",
						"###..#", "###....#", "#....###", "#..###",
					   	"#....##...#", "#...##....#", "###...#",
					   	"#...###", "##....##", "##..##", "#....##....#",
					   	"#...##...#", "##...##"};

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
void				ft_fillit(int fd);
int					ft_list_size(t_list *begin_list);
void				ft_put_charlst(t_list *lst);
t_list				*ft_list_em(char *str, t_list *tet_list);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lsteadd(t_list **alst, t_list *nw);
void				*ft_memalloc(size_t size);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				ft_putendl(const char *str);
char				*ft_strdup(const char *s1);

#endif
