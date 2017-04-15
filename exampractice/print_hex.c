/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 19:39:57 by tochen            #+#    #+#             */
/*   Updated: 2016/11/16 21:20:36 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_atoi(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	char_to_hex(int num)
{
	if (num <= 9)
	{
		ft_putchar(num + 48);
	}
	if (num == 10)
	{
		ft_putchar('a');
	}
	if (num == 11)
	{
		ft_putchar('b');
	}
	if (num == 12)
	{
		ft_putchar('c');
	}
	if (num == 13)
	{
		ft_putchar('d');
	}
	if (num == 14)
	{
		ft_putchar('e');
	}
	if (num == 15)
	{
		ft_putchar('f');
	}
}

int		ft_atoi(char *str)
{
	int i;
	int neg_flag;
	int result;

	result = 0;
	neg_flag = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			neg_flag = -1;
			ft_putchar('-');
		}
		else
			ft_putchar('+');
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result = result + (str[i] - '0');
		i++;
	}
	result = result * neg_flag;
	return (result);
}

void	print_hex(int num)
{
	if (num <= 15)
	{
		char_to_hex(num);
	}
	else
	{
		print_hex(num / 16);
		char_to_hex(num % 16);
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		return (1);
	}
	printf("%d\n", ft_atoi(argv[1]));
	print_hex(ft_atoi(argv[1]));
	return (0);
}
