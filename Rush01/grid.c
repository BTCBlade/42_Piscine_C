/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 21:29:02 by tochen            #+#    #+#             */
/*   Updated: 2016/11/05 21:31:57 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	**fill_numbers(char **board, int x, int y);

char	**create_grid(char **argv)
{
	char	**grid;
	int		i;
	int		j;

	i = 0;
	grid = (char**)malloc(sizeof(char*) * 10);
	while (i < 9)
	{
		j = 0;
		grid[i] = (char*)malloc(sizeof(char) * 10);
		while (j < 9)
		{
			grid[i][j] = argv[i + 1][j];
			j++;
		}
		grid[i][j] = '\0';
		i++;
	}
	grid[i] = NULL;
	return (grid);
}

void	print_grid(char **grid)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			write(1, &(grid[i][j]), 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		grid_valid(char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i][j] <= 48 || argv[i][j] >= 58)
			{
				if (argv[i][j] != '.')
				{
					return (0);
				}
			}
			j++;
		}
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	char	**gridtest;
	int		testnum;

	if (argc != 10)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	gridtest = create_grid(argv);
	if (!grid_valid(gridtest))
	{
		write(1, "Error\n", 6);
	}
	else
	{
		print_grid(gridtest);
	}
	return (0);
}
