/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 19:52:33 by tochen            #+#    #+#             */
/*   Updated: 2016/11/14 19:52:38 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		grid_width(char **grid)
{
	int i;

	i = 0;
	while (grid[1][i])
	{
		i++;
	}
	return (i);
}

int		grid_height(char **grid)
{
	int i;

	i = 0;
	while (grid[i])
	{
		i++;
	}
	return (i);
}

char	**grid_create(char **argv)
{
	char	**grid;
	int		i;
	int		j;

	i = 0;
	grid = (char**)malloc(sizeof(char*) * (grid_height(argv) + 1));
	while (i < grid_height(argv))
	{
		j = 0;
		grid[i] = (char*)malloc(sizeof(char) * (ft_strlen(argv[i]) + 1));
		while (j < ft_strlen(argv[i]))
		{
			grid[i][j] = argv[i][j];
			j++;
		}
		grid[i][j] = '\0';
		i++;
	}
	grid[i] = NULL;
	return (grid);
}

void	grid_print(char **grid)
{
	int i;
	int j;

	i = 0;
	while (grid[i])
	{
		j = 0;
		while (grid[i][j])
		{
			write(1, &(grid[i][j]), 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		grid_valid(char **argv, char empty, char obstacle, int height)
{
	int i;
	int j;
	int w;

	i = 0;
	w = ft_strlen(argv[0]);
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_strlen(argv[i]) != w)
				return (0);
			if (argv[i][j] != empty && argv[i][j] != obstacle)
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	if ((i) != height)
		return (0);
	return (1);
}

char	**grid_readstr_to_2d(char *cs, int height)
{
	char **grid;
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	grid = (char**)malloc(sizeof(char*) * (height + 1));
	while (cs[i] != '\0')
	{
		k = 0;
		grid[i] = (char*)malloc(sizeof(char) * (ft_str_to_newline_len(cs) + 1));
		while (cs[i] != '\n')
		{
			grid[j][k] = cs[i];
			k++;
		}
		grid[j][k] = '\0';
		j++;
		i++;
	}
	grid[j] = NULL;
	return (grid);
}

int		main(int argc, char **argv)
{
	// char **grid;
	// int start;
	//
	// start = 0;
	if (argc <= 1)
		write(2, "need arguments", 15);
	// grid = grid_create(argv + 2);
	// grid_print(grid);
	//
	// while (argv[1][start] >= '0' && argv[1][start] <= '9')
	// 	start++;
	// printf("%d\n", grid_valid(grid, argv[1][start], argv[1][start + 1], atoi(argv[1])));

	int		ret;
	int		fd;
	char	buf[BUF_SIZE + 1];
	char	*tmp;
	char	*cs;
	int		count;
	int		height;

	count = 0;
	cs = malloc(1);
	if (!cs)
		return (0);
	*cs = '\0';
	fd = open(argv[1], O_RDONLY);
	while ((ret = read(fd, buf, BUF_SIZE)) > 0)
	{
		if (count == 0)
		{
			height = (buf[0] - 48);
			count++;
		}
		tmp = malloc(ft_strlen(cs) + BUF_SIZE + 1);
		if (!tmp)
			return (0);
		ft_strcpy(tmp, cs);
		if (cs)
			free(cs);
		cs = malloc(ft_strlen(tmp));
		cs = ft_strcat(tmp, buf);
	}
	printf("%s\n", cs);
	// grid = grid_readstr_to_2d(cs, height);
	// grid_create(grid);
	// grid_print(grid);
	// ft_putstr("\n");
	return (0);
}
