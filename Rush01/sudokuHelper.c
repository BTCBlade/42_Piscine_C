/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudokuHelper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 21:03:20 by tochen            #+#    #+#             */
/*   Updated: 2016/11/05 21:21:06 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		sodokuHelper(int puzzle[][9], int row, int column)
{
	int nextNum = 1;
	if (9 == row)
	{
		return 1;
	}
	if (puzzle[row][column])
	{
		if (column == 8)
		{
			if (sudokuHelper(puzzle, row+1, 0)) 
				return 1;
		}
		else
		{
			if (sudokuHelper(puzzle, row, column+1))
				return 1;
		}
		return (0);
	}
}

