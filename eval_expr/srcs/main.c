/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 00:09:19 by tochen            #+#    #+#             */
/*   Updated: 2016/11/13 00:09:41 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	char **test2d;

	test2d = (char**)malloc(25000);
	if (argc <= 1 || argc >= 3)
	{
		ft_putstr_error("Error: Incorrect number of arguments!\n");
		return (1);
	}
	printf("%s\n", de_space("(1 % 21) + 1"));
	printf("%s\n", argv[1]);
	return (0);
}
