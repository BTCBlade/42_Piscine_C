/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 14:02:15 by tochen            #+#    #+#             */
/*   Updated: 2016/11/16 15:10:34 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	int i;
	int count;
	char result[9];

	result[8] = '\0';
	i = 0;
	count = 7;
	while (octet > 0)
	{
		result[count] = (octet % 2 + 48);
		octet = octet / 2;
		count--;
	}
	while (count >= 0)
	{
		result[count] = 48;
		count--;
	}
	while (result[i] != '\0')
	{
		ft_putchar(result[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(void)
{
	print_bits(0);
	print_bits(1);
	print_bits(2);
	print_bits(3);
	print_bits(4);
	print_bits(5);
	print_bits(10);
	print_bits(88);
	print_bits(255);
	return (0);
}
