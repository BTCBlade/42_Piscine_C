/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 18:44:59 by tochen            #+#    #+#             */
/*   Updated: 2016/10/27 18:57:55 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_putchar(char c)
{
	write( 1, &c, 1);
	return (0);
}

void 	ft_is_negative(int n)
{
	if( n < 0 )
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}

int		main()
{
	ft_is_negative(-555);
	ft_putchar('\n');
}
