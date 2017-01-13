#ifndef FILLIT_H
# define FILLIT_H

#define BUFF_SIZE 21

#include "../libft/libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

typedef struct 		s_lst
{
}					i_lst;

int					ft_getfile(int fd);

static void 		ft_plcbrs(char *str);
char				*ft_gettet(int fd);

#endif
