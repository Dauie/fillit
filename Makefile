# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/01 00:10:09 by cfu               #+#    #+#              #
#    Updated: 2017/02/01 00:24:13 by cfu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = $(LIBFT)libft.a ft_didplctet.c ft_fillit.c ft_fillput.c ft_getinputs.c \
	  ft_inxes.c ft_solve.c ft_validate_tets.c

OBJS = $(SRC: .c=.o)

HEADER = fillit.h

FLAGS = -Wall -Wextra -Werror -g

CC = gcc

LIBFT = libft/

LIBRE = make -C $(LIBFT) re

LIBC = make -C $(LIBFT) clean

LIBF = make -C $(LIBFT) fclean

all : $(NAME)

$(NAME):
	$(LIBRE)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	$(LIBC)

fclean: clean
	$(LIBF)
	/bin/rm -f $(NAME)

re: fclean all
