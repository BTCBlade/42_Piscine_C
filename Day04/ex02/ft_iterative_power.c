/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 21:07:53 by tochen            #+#    #+#             */
/*   Updated: 2016/10/29 21:53:39 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_iterative_power(int nb, int power)
{
	int results;

	results = 1;
	if (power < 0)
	{
		return (0);
	}
	while (power > 0)
	{
		results *= nb;
		power--;
	}
	return (results);
}

int	main()
{
	printf("%d\n", ft_iterative_power(3,3));
	printf("%d\n", ft_iterative_power(-3,3));
	printf("%d\n", ft_iterative_power(3,-4));
}
