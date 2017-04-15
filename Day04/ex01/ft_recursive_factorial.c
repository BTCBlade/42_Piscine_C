/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 16:48:06 by tochen            #+#    #+#             */
/*   Updated: 2016/10/29 20:46:09 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{	
	if (nb > 12)
	{
		return (0);
	}
	if ( nb == 1 || nb == 0)
	{
		//printf("%d", 'b');
		return (1);
	}
	return (nb * ft_recursive_factorial( nb - 1));

	return (0);
}

int	main(void)
{
	printf("%d\n", ft_recursive_factorial(13));
	printf("%d\n", ft_recursive_factorial(1));
	printf("%d\n", ft_recursive_factorial(5));
}
