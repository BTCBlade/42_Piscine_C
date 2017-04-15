/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 23:30:34 by tochen            #+#    #+#             */
/*   Updated: 2016/11/17 00:42:55 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


int 	charbase_to_int(char c)
{
	if (c >= 48 && c <= 59)
	{
		return (c - 48);
	}
	if (c == 'A' || c == 'a')
		return 10;
	if (c == 'B' || c == 'b')
		return 11;
	if (c == 'C' || c == 'c')
		return 12;
	if (c == 'D' || c == 'd')
		return 13;
	if (c == 'E' || c == 'e')
		return 14;
	if (c == 'F' || c == 'f')
		return 15;
	return 0;
}

int		ft_atoi_base(const char *str, int str_base)
{
	int i;
	int neg_flag;
	int results;
	int base_temp;

	base_temp = str_base;
	results = 0;
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
		}
		i++;
	}
	while ((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90)|| (str[i] >= 97 && str[i] <= 122))
	{
		if (charbase_to_int(str[i]) < str_base)
		{
			results = results * 10;

		}

int		main(void)
{
	printf("%d\n", charbase_to_int('1'));
	printf("%d\n", charbase_to_int('f'));
	return (0);
}
