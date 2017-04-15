/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_board.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 14:02:06 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/06 21:42:20 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	**get_board(char **argv)
{
	char	**board;
	int		x;
	int		y;

	board = (char**)malloc(sizeof(char*) * 10);
	x = 0;
	while (x < 9)
	{
		y = 0;
		board[x] = (char*)malloc(sizeof(char) * 10);
		while (y < 9)
		{
			board[x][y] = argv[x + 1][y];
			y++;
		}
		board[x][y] = '\0';
		x++;
	}
	board[x] = NULL;
	return (board);
}

void	print_board(char **board)
{
	int x;
	int y;

	x = 0;
	while (x < 9)
	{
		y = 0;
		while (y < 9)
		{
			write(1, &(board[x][y]), 1);
			write(1, " ", 1);
			y++;
		}
		write(1, "\n", 1);
		x++;
	}
}
