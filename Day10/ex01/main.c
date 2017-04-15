/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:45:37 by tochen            #+#    #+#             */
/*   Updated: 2016/11/07 16:45:44 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
  	if (nb < 0 && nb != -2147483648)
  	{
		ft_putchar('-');
      	nb = -nb;
  	}
	if (nb > 9)
	{
		ft_putnbr(nb/10);
		ft_putchar(nb % 10 + '0');
	}
	if (nb >= 0 && nb <= 9)
	{
	    ft_putchar(nb + '0');
	}
}

void	ft_foreach(int *tab, int length, void(*f)(int));

int		main(void)
{
	int inttab[] = {0, 1, 1, 2, 3, 5, 8, 13};
	ft_foreach(inttab, 5, &ft_putnbr);
	return (0);
}
