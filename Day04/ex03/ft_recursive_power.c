/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 22:02:36 by tochen            #+#    #+#             */
/*   Updated: 2016/10/29 22:15:59 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if(power <= 0)
	{
		return (0);
	}
	if(power == 1)
	{
		return nb;
	}
	return (nb * ft_recursive_power(nb, power -1));
}

int main()
{
	printf("%d\n", ft_recursive_power(2, 3));
	printf("%d\n", ft_recursive_power(-2, 3));
}
