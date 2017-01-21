/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_to_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 20:54:12 by cfu               #+#    #+#             */
/*   Updated: 2017/01/12 22:28:24 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "libft.h"

#define BUF_SIZE 22

//BUF 22
//read 21 bytes
//if READ_RET == 21, check for spot 21 (buf[20]) for '\n', if it's there, we have more to read
//if READ_RET is not equal to 21, then it needs to be 20
//if it is still valid, check other '\n'
//turn all '\n' into '.' and add '\0' to end of each tetrimino

//need to store all possible tetriminos inside somewhere so we have something to compare buf to
//turn given grids into strings so you can use string trim and string compare to see if it is a valid tetrimino
//
//if we're going to use linked lists, then we can store all valid tetriminos into the linked list and compare between the current ret to the linked list.
//
//for solver use parsing recursion or match n match type recursion to find all possibilities

char	*grid_to_string(int fd)
{
	int	i;

	i = 0;
	while (ret[i] && i < 21)
	{
		if (ret[i] == '.' || ret[i] == '#')
			i++;
		if (ret[i] == '\n')
		{
			ret[i] == '|';
			i++;
		}
	}
	if (i == 21)
		ret[i] = '\0';
		// if it's none of these characters, return error
}

void	if_valid(char *file)
{
	int		fd;
	int		ret;
	char	buf(BUF_SIZE);

	if ((fd = open(file, O_RDONLY)) != -1)
	{
		while (ret = read(fd, buf, BUF_SIZE))
		{
			if (ret != 21 || ret != 20)
				exit (1);
			else if (ret[20] == '\n')
				grid_to_string(buf);
			else if (!ret[20])
				grid_to_string(buf);
			//also need to use malloc to write the file we are reading and then free it at the end

		}
	}
}
