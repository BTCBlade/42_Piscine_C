/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 21:20:35 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/06 22:33:13 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_sector1(char **board, int row, int column, int next)
{
	if (board[row][column] == next)
		return (0);
	if (board[row][column] == next)
		return (0);
	row++;
	column++;
	return (0);
}

int		check_sectors(char **board, int row, int column, int next)
{
	while (row < (row + 3))
	{
		if (board[row][column] == next)
			return (0);
		row++;
	}
	while (column < (column + 3))
	{
		if (board[row][column] == next)
			return (0);
		column++;
	}
	return (0);
}

int		check_row_column(char **board, int row, int column, int next)
{
	int		x;

	x = 0;
	while (x < 9)
	{
		if (board[x][column] == next)
			return (0);
		if (board[row][x] == next)
			return (0);
		x++;
	}
	return (0);
}

int		ft_valid(int next, int row, int column, char **board)
{
	check_row_column(board, row, column, next);
	while (row < 3 && column < 3)
		check_sector1(board, 0, 0, next);
	while (row < 3 && column < 6 && column > 2)
		check_sectors(board, 0, 3, next);
	while (row < 3 && column > 5 && column < 9)
		check_sectors(board, 0, 6, next);
	while (row < 6 && row > 2 && column < 3)
		check_sectors(board, 3, 0, next);
	while (row < 6 && row > 2 && column < 6 && column > 2)
		check_sectors(board, 3, 3, next);
	while (row < 6 && row > 2 && column > 5 && column < 9)
		check_sectors(board, 3, 6, next);
	while (row > 5 && row < 9 && column < 3)
		check_sectors(board, 6, 0, next);
	while (row > 5 && row < 9 && column < 6 && column > 2)
		check_sectors(board, 6, 3, next);
	while (row > 5 && row < 9 && column > 5 && column < 9)
		check_sectors(board, 6, 6, next);
	return (0);
}
