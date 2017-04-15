/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 14:07:32 by tochen            #+#    #+#             */
/*   Updated: 2016/11/01 14:26:00 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int index;
	int results;
	int setToNegativeOne;

	results = 0;
	index = 0;
	setToNegativeOne = 1;
	while (str[index] == 32)
		index++;
	if (str[index] == 45)
	{
		setToNegativeOne = -1;
		index++;
	}
	if (str[index] == 43)
	{
		index++;
	}
	while (str[index] != '\0' && str[index] >= 48 && str[index] <= 57)
	{
			results = results * 10 + str[index] - '0';
			index++;
	}
	return results * setToNegativeOne;
}

/**int	main(void)
{

	printf("%d\n", ft_atoi("123c45"));
	//ft_putchar('\n');
	//ft_atoi("  123 4c");
	//ft_putchar('\n');
	//ft_atoi("c123");
	return (0);
}**/
