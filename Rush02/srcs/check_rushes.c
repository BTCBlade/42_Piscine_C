/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rushes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashevtso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 13:38:59 by ashevtso          #+#    #+#             */
/*   Updated: 2016/11/13 13:39:02 by ashevtso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print_rush(int n, int w, int h, int *printed)
{
	if (*printed)
	ft_putstr(" || ");
	ft_putstr("[rush-0");
	ft_putnbr(n);
	ft_putstr("] [");
	ft_putnbr(w);
	ft_putstr("] [");
	ft_putnbr(h);
	ft_putstr("]");
	*printed = 1;
}

int		print_rushes(char **cs, int w, int h)
{
	int printed;

	printed = 0;
	if (print_rush00(cs, w, h))
		print_rush(0, w, h, &printed);
	if (print_rush01(cs, w, h))
		print_rush(1, w, h, &printed);
	if (print_rush02(cs, w, h))
		print_rush(2, w, h, &printed);
	if (print_rush03(cs, w, h))
		print_rush(3, w, h, &printed);
	if (print_rush04(cs, w, h))
		print_rush(4, w, h, &printed);
	return (printed);
}

int		check_input(char *s, int w, int h)
{
	char	**cs;
	int		i;
	int		j;
	int		k;

	cs = malloc(h * sizeof(char **));
	i = 0;
	j = 0;
	cs[0] = malloc(w);
	while (s[i])
	{
		if (s[i] == '\n' && s[i + 1] != '\0')
		{
			j++;
			k = 0;
			cs[j] = malloc(w);
		}
		else
		{
			cs[j][k] = s[i];
			k++;
		}
		i++;
	}
	return (print_rushes(cs, w, h));
}

int		process_input(char *s)
{
	int		w;
	int		h;
	int		i;

	i = 0;
	h = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			h++;
		else if (h == 0)
			w++;
		i++;
	}
	return (check_input(s, w, h));
}
