/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:19:19 by tochen            #+#    #+#             */
/*   Updated: 2016/11/05 18:00:33 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		main(int argc, char **argv)
{
	int str_i;
	int arg_i;

	str_i = 0;
	arg_i = 1;
	if (argc == 10)
	{
		while (argv[arg_i] != '\0')
		{
			while (argv[arg_i][str_i] != '\0')
			{
				if ((argv[arg_i][str_i] >= 57 && argv[arg_i][str_i] <= 48) || argv[arg_i][str_i] != 46)
				{
					write(1, "Error\n", 7);
					return(0);
				}
				str_i++;
			}
		arg_i++;
		}
	}
	else
	{
		write(1, "Error\n", 7);
	}
	return (0);
}
