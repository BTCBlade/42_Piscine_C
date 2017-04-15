/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:39:26 by tochen            #+#    #+#             */
/*   Updated: 2016/11/04 15:08:09 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_max(int *array)
{
	int biggest;
	int i;

	i = 0;
	biggest = -2147483647;
	while (array[i] != '\0')
	{
		if (array[i] > biggest)
		{
			biggest = array[i];
		}
		i++;
	}
	return (biggest);
}

int		main(void)
{
	int intarray[10] = { 12, 14, 16, 28, 32, 5 };
	int results;

	results = ft_max(intarray);
	printf("%d\n", results);

	return (0);
}
