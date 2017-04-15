/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srcs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 13:06:57 by tochen            #+#    #+#             */
/*   Updated: 2016/11/12 13:06:59 by tochen           ###   ########.fr       */
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
	return (results * setToNegativeOne);
}

int   ft_makeheadortail(int a, char outter_f, char inner, char outter_b)
{
  	int index;

  	index = 1;
    if (index == 1 && a >= 1)
    {
      	ft_putchar(outter_front);
		index++;
    }
    while (index >= 2 && index < a)
    {
      	ft_putchar(inner);
		index++;
    }
    if (index == a && index >= 2)
    {
		ft_putchar(outter_back);
    }
	if (a >= 1)
		ft_putchar('\n');
  	return (0);
}

int ft_makemiddle(int a, char outter, char inner)
{
  	int index;

  	index = 1;
  	if (index == 1 && a >= 1)
  	{
    	ft_putchar(outter);
		index++;
  	}
  	while (index >= 2 && index < a)
  	{
      	ft_putchar(inner);
      	index++;
  	}
	if (index == a && index >= 2)
	{
		ft_putchar(outter);
	}
	if (a >= 1)
		ft_putchar('\n');
 	return (0);
}
