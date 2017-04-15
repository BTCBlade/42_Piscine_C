/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 13:14:38 by tochen            #+#    #+#             */
/*   Updated: 2016/11/17 13:47:11 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void  	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		not_second_char_in_str(char *str, int index)
{
	int i;
	int j;

	i = index;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < index)
		{
			if (str[j] == str[i] )
			{
				return 0;
			}
			j++;
		}
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (1);
	}
	int i;
	int j;

	i = 0;
	j = 0;
	while (argv[1][i] != '\0')
	{
		j = 0;
		while (argv[2][j] != '\0')
		{
			if (argv[1][i] == argv[2][j] && not_second_char_in_str(argv[1], i))
			{
				ft_putchar(argv[1][i]);
				break;
			}
			j++;
		}
		i++;
	}
	return (0);
}
