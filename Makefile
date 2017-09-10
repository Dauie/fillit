# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfu <cfu@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/01 00:10:09 by cfu               #+#    #+#              #
#    Updated: 2017/02/27 20:11:35 by cfu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = fillit.h

NAME = fillit

SRC = ft_didplctet.c ft_fillit.c ft_fillput.c ft_getinputs.c \
	  ft_solve.c ft_validate_tets.c ft_lstcrdsnew.c ft_validate_hlp.c

OBJS = $(SRC:.c=.o)

all : $(NAME)

$(NAME):
	cd libft && make
	gcc -g -Wall -Wextra -Werror -c $(SRC)
	gcc -g -Wall -Wextra -Werror $(OBJS) -o $(NAME) -L libft -lft

clean:
	cd libft && make clean
	/bin/rm -f $(OBJS)

fclean: clean
	cd libft && make fclean
	/bin/rm -f $(NAME)

re: fclean all
