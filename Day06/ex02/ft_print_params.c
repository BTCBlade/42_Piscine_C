/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 22:09:00 by tochen            #+#    #+#             */
/*   Updated: 2016/11/02 22:16:02 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int		main(int argc, char **argv)
{
	int argIndex;

	argIndex = 1;
	if(argc >= 1)
	{
		while (argv[argIndex] != '\0')
		{
			ft_putstr(argv[argIndex]);
			ft_putchar('\n');
			argIndex++;
		}
	}
	return (0);
}
