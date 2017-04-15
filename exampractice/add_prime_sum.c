/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 17:18:24 by tochen            #+#    #+#             */
/*   Updated: 2016/11/17 17:33:44 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void  	ft_putchar(char c)
{
	write(1, &c, 1);
}

int 	is_prime(int num)
{
	int divider;

	divider = 2;
	if (num < 2)
	{
		return (0);
	}
	while (divider < num)
	{
		if (num % divider == 0)
		{
			return (0);
		}
		divider++;
	}
	return (1);
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

void	add_prime_sum(int num)
{
	int result;
	int i;

	i = 2;
	result = 0;
	while (i <= num)
	{
		if (is_prime(i))
		{
			result = result + i;
		}
		i++;
	}
	ft_putnbr(result);
}

int		main(void)
{
	add_prime_sum(13);
	return (0);
}
