/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 15:53:10 by tochen            #+#    #+#             */
/*   Updated: 2016/11/10 15:56:15 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

#define BUF_SIZE 250

int	main(int argc, char **argv)
{
	int		i;
	int		dashtest;
	char	buf[BUF_SIZE + 1];

	i = 1;
	dashtest = ft_strcmp(argv[i], "-");
	while (argv[i] != 0)
	{
		while (argc == 1 || dashtest == 0 || ft_strcmp(argv[i], "--") == 0)
		{
			read(0, buf, BUF_SIZE);
			ft_putstr_error(buf);
		}
		handle_cat(argv[i], buf, BUF_SIZE);
		i++;
	}
	return (0);
}
