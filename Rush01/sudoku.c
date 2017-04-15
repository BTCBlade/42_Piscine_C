/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 21:21:29 by tochen            #+#    #+#             */
/*   Updated: 2016/11/05 21:21:33 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		isValid(int next, int x, int y, char **board);

char	**fill_numbers(char **board, int x, int y)
{
	int next;
	char **copyboard;

	copyboard = board;
	next = 0;
	/** if coordinate is NOT a dot, move to next location**/
	if (board[x][y] != '.')
	{
		if ((y + 1) < 9)
			return (fill_numbers(board, x , y + 1));
		if ((x + 1) < 9)
			return (fill_numbers(board, x + 1, 0));
		else
			return (board);
	}
	else
	{
		while (next < 9)
		{
			if (isValid(next + 1, x, y, board))
			{
				board[x][y] = next + 1;
				if ( (y + 1) < 9)
				{
					board[x][y] = '.';
					//fill_numbers(board, x, y + 1);
				}
				if ( (x + 1) < 9)
				{
					board[x][y] = '.';
					//fill_numbers(board, x + 1, y);
				}
				return (board);
			}
		}
	}
	return (board);
}

int		isValid(int next, int x, int y, char **board)
{
	int rowStart = (x/3) * 3;
	int colStart = (y/3) * 3;
	int index;

	index = 0;
	while (index < 9)
	{
		if (board[x][index] == next)
			return (0);
		if (board[index][y] == next)
			return (0);
		if (board[rowStart + (index % 3)][colStart + (index/3)] == next)
			return (0);
	}
	return (1);
}
