make -C libft/ fclean && make -C libft/
clang -g -Wall -Wextra -Werror -I fillit.h -c ft_*.c -o ft_fillit.o
clang -g -o test_fill ft_fillit.o -I libft/includes -L libft/ -lft
