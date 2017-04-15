/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   soduku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 13:03:19 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/06 22:25:07 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   soduku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 13:03:19 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/06 22:25:07 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**get_board(char **argv);
void	print_board(char **board);
char	**ft_mover(char **board, int x, int y);

int		main(int argc, char **argv)
{
	int	x;
	int	y;
	char **board;

	x = 0;
	y = 0;
	board = get_board(argv);
	if (argc > 1)
		while (x < 9)
		{
			while (y < 9)
			{
				if ((argv[x][y] > 48 && argv[x][y] < 58) || argv[x][y] == 46)
					y++;
				else
					return (0);
			}
			y = 0;
			x++;
		}
		print_board(ft_mover(board, 0, 0));
		return (0);
}
