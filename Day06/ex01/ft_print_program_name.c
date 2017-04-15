/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 13:12:09 by tochen            #+#    #+#             */
/*   Updated: 2016/11/02 13:17:16 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int index;
	int argIndex;

	argIndex = 1;
	index = 0;
	while (argv[argIndex] != '\0')
	{
		while (argv[argIndex][index] != '\0')
		{
			ft_putchar(argv[0][index]);
			index++;
		}
		ft_putchar('\n');
		argIndex++;
	}
	return (0);
}
