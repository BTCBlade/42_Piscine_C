/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 21:50:19 by tochen            #+#    #+#             */
/*   Updated: 2016/11/03 22:54:12 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	print_noon_midnight_regular(int hour)
{
	if (hour == 12)
	{
		write(1, "noon", 5);
	}
	if (hour == 24)
	{
		write(1, "midnight", 9);
	}
	if (hour > 12 && hour != 24)
	{
		hour = hour % 12;
	}
	printf("%d ", hour);
}

void	ampm(int hour)
{
	if (hour < 12)
	{
		write(1, "A.M. ", 5);
	}
	if (hour > 12 && hour < 24)
	{
		write(1, "P.M. ", 5);
	}
	else
	{
		write(1, "A.M. ", 5);
	}
}

void	ft_take_place(int hour)
{
	write(1, "THE FOLLOWING TAKES PLACE BETWEEN ", 35);
	print_noon_midnight_regular(hour);
	if (hour == 12 || hour == 24)
		write(1, " ", 2);
	else
		ampm(hour);
	write(1, "AND ", 5);
	write(1, ".00 ", 5);
	if (hour == 12 || hour == 24)
		write(1, ".", 1);
	else
		ampm(hour);
	write(1,"\n", 1);
}

int		main(void)
{
	int hour = 3;
	printf("%d\n", hour);
	ft_take_place(2);
	ft_take_place(12);
	ft_take_place(15);
	ft_take_place(24);
}
