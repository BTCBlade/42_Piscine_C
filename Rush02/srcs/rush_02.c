/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 13:13:44 by tochen            #+#    #+#             */
/*   Updated: 2016/11/12 13:13:46 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		rush(int a, int b)
{
	int tracker;

	tracker = 1;
	if (tracker == 1 && b >= 1)
	{
		ft_makeheadortail(a, 'A', 'B', 'A');
		tracker++;
	}
	while (tracker > 1 && tracker < b)
	{
		ft_makemiddle(a, 'B', ' ');
		tracker++;
	}
	if (tracker == b)
	{
		ft_makeheadortail(a, 'C', 'B', 'C');
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc <= 2)
	{
		ft_putstr_error("Error: Too few arguments");
		return (1);
	}
	if (argc >= 4)
	{
		ft_putstr_error("Error: Too many arguments");
		return (1);
	}
	rush(ft_atoi(argv[1]), ft_atoi(argv[2]));

	return (0);
}
