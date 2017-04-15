/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   soduku_mover.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 21:03:34 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/06 20:38:04 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_valid(int next, int row, int column, char **board);
char	**ft_mover(char **board, int x, int y);

void	ft_place_number(int next, int x, int y, char **board)
{
	next++;
	if (ft_valid(next, x, y, board))
	{
		board[x][y] = next;
		if (y == 8)
			ft_mover(board, x++, 0);
		else
			ft_mover(board, x, y++);
	}
}

char	**ft_mover(char **board, int x, int y)
{
	int	next;

	next = 0;
	while (board[x][y] > 47 && board[x][y] < 58)
	{
		if (y == 8)
		{
			x++;
			y = 0;
		}
		else
			y++;
		while (next < 10)
			ft_place_number(next, x, y, board);
		if (board[8][8] > 47 && board[8][8] < 58)
			return (board);
	}
	return (0);
}
