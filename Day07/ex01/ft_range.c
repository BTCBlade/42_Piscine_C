/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:21:57 by tochen            #+#    #+#             */
/*   Updated: 2016/11/03 17:47:40 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *intarray;
	int i;
	int diff;

	intarray = (void*)0;
	if(min >= max)
	{
		return (intarray);
	}
	i = 0;
	diff = max - min;
	intarray = (int*)(malloc(sizeof(*intarray) * (diff + 1)));
	while (i < diff)
	{
		intarray[i] = min;
		min++;
		i++;
	}
	return (intarray);
}

int		main(void)
{
	int *array;
	array = ft_range(2,2);
	printf("%d\n", array[0]);
	return (0);
}
