/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_srcs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 19:45:00 by tochen            #+#    #+#             */
/*   Updated: 2016/11/14 19:45:06 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
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

int		ft_putchar_error(char c)
{
	write(2, &c, 1);
	return (1);
}
void	ft_putstr_error(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar_error(str[index]);
		index++;
	}
}
void	ft_putnbr(int nb)
{
	int delta;

	delta = 0;
	if (nb < 0)
	{
		if (nb < -2147483647)
			delta = nb + 2147483647;
		ft_putchar('-');
		nb = -(nb - delta);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10 - delta);
	}
	else
		ft_putchar(nb + 48);
}

void	ft_putnbr_nl(int nb)
{
	ft_putnbr(nb);
	ft_putchar('\n');
}
