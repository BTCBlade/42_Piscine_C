/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashevtso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 16:41:08 by ashevtso          #+#    #+#             */
/*   Updated: 2016/11/13 13:31:22 by ashevtso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	print_rush00(char **cs, int w, int h)
{
	int		i;
	int		j;
	char	c;

	i = -1;
	while (++i < h)
	{
		j = -1;
		while (++j < w)
		{
			c = cs[i][j];
			if ((i == 0 && j == 0 && c != 'o')
				|| (i == 0 && j > 0 && j == w - 1 && c != 'o')
				|| (i > 0 && i == h - 1 && j == 0 && c != 'o')
				|| (i > 0 && i == h - 1 && j > 0 && j == w - 1 && c != 'o')
				|| ((i == 0 || i == h - 1) && j > 0 && j < w - 1 && c != '-')
				|| ((j == 0 || j == w - 1) && i > 0 && i < h - 1 && c != '|')
				|| (i > 0 && i < h - 1 && j > 0 && j < w - 1 && c != ' '))
				return (0);
		}
	}
	return (1);
}

int	print_rush01(char **cs, int w, int h)
{
	int		i;
	int		j;
	char	c;

	i = -1;
	while (++i < h)
	{
		j = -1;
		while (++j < w)
		{
			c = cs[i][j];
			if ((i == 0 && j == 0 && c != '/')
				|| (i == 0 && j > 0 && j == w - 1 && c != '\\')
				|| (i > 0 && i == h - 1 && j == 0 && c != '\\')
				|| (i > 0 && i == h - 1 && j > 0 && j == w - 1 && c != '/')
				|| ((i == 0 || i == h - 1) && j > 0 && j < w - 1 && c != '*')
				|| ((j == 0 || j == w - 1) && i > 0 && i < h - 1 && c != '*')
				|| (i > 0 && i < h - 1 && j > 0 && j < w - 1 && c != ' '))
				return (0);
		}
	}
	return (1);
}

int	print_rush02(char **cs, int w, int h)
{
	int		i;
	int		j;
	char	c;

	i = -1;
	while (++i < h)
	{
		j = -1;
		while (++j < w)
		{
			c = cs[i][j];
			if ((i == 0 && j == 0 && c != 'A')
				|| (i == 0 && j > 0 && j == w - 1 && c != 'A')
				|| (i > 0 && i == h - 1 && j == 0 && c != 'C')
				|| (i > 0 && i == h - 1 && j > 0 && j == w - 1 && c != 'C')
				|| ((i == 0 || i == h - 1) && j > 0 && j < w - 1 && c != 'B')
				|| ((j == 0 || j == w - 1) && i > 0 && i < h - 1 && c != 'B')
				|| (i > 0 && i < h - 1 && j > 0 && j < w - 1 && c != ' '))
				return (0);
		}
	}
	return (1);
}

int	print_rush03(char **cs, int w, int h)
{
	int		i;
	int		j;
	char	c;

	i = -1;
	while (++i < h)
	{
		j = -1;
		while (++j < w)
		{
			c = cs[i][j];
			if ((i == 0 && j == 0 && c != 'A')
				|| (i == 0 && j > 0 && j == w - 1 && c != 'C')
				|| (i > 0 && i == h - 1 && j == 0 && c != 'A')
				|| (i > 0 && i == h - 1 && j > 0 && j == w - 1 && c != 'C')
				|| ((i == 0 || i == h - 1) && j > 0 && j < w - 1 && c != 'B')
				|| ((j == 0 || j == w - 1) && i > 0 && i < h - 1 && c != 'B')
				|| (i > 0 && i < h - 1 && j > 0 && j < w - 1 && c != ' '))
				return (0);
		}
	}
	return (1);
}

int	print_rush04(char **cs, int w, int h)
{
	int		i;
	int		j;
	char	c;

	i = -1;
	while (++i < h)
	{
		j = -1;
		while (++j < w)
		{
			c = cs[i][j];
			if ((i == 0 && j == 0 && c != 'A')
				|| (i == 0 && j > 0 && j == w - 1 && c != 'C')
				|| (i > 0 && i == h - 1 && j == 0 && c != 'C')
				|| (i > 0 && i == h - 1 && j > 0 && j == w - 1 && c != 'A')
				|| ((i == 0 || i == h - 1) && j > 0 && j < w - 1 && c != 'B')
				|| ((j == 0 || j == w - 1) && i > 0 && i < h - 1 && c != 'B')
				|| (i > 0 && i < h - 1 && j > 0 && j < w - 1 && c != ' '))
				return (0);
		}
	}
	return (1);
}
