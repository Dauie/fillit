# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfu <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/03 14:12:41 by cfu               #+#    #+#              #
#    Updated: 2017/01/19 20:04:41 by rlutt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = ft_repchar.c ft_gettet.c ft_trim_tet.c ft_strnew.c ft_strlen.c \
	  ft_putchar.c ft_putstr.c ft_memmove.c ft_strchr.c ft_strrchr.c \
	  ft_bzero.c ft_memset.c ft_validate_tets.c ft_strequ.c ft_putnbr.c \
	  ft_pound_to_letter.c ft_fillit.c ft_list_size.c ft_put_charlst.c \
	  ft_list_em.c ft_lstnew.c ft_lsteadd.c ft_memalloc.c ft_memcpy.c \
	  ft_strdup.c ft_putendl.c

OBJS = $(SRC:.c=.o)

HEADER = fillit.h

FLAGS = -Wall -Wextra -Werror -g

CC = gcc

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) main.c -o $(NAME) 

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

