/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrI.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 13:00:47 by tochen            #+#    #+#             */
/*   Updated: 2016/11/01 13:21:51 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void putchar_negative_int_bound()
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			putchar_negative_int_bound();
		}
		else
		{
			ft_putchar('-');
			nb = nb * - 1;
		}
	}
	while ( (nb/10) > 9)
	{
		ft_putchar((nb % 1) + '0');
		nb = nb/10;
	}
	if (nb <= 9)
	{
		ft_putchar(nb + '0');
	}
}

int main(void)
{
		ft_putnbr(0);
		ft_putchar('\n');

		ft_putnbr(-1);
		ft_putchar('\n');

		ft_putnbr(1);
		ft_putchar('\n');

		ft_putnbr(10);
		ft_putchar('\n');

		ft_putnbr(25);
		ft_putchar('\n');
		ft_putnbr(-2147483649);
		//ft_putnbr(2147483648);
		return (0);
}
