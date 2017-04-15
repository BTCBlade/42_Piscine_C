/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:05:11 by tochen            #+#    #+#             */
/*   Updated: 2016/11/07 17:29:43 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *result_array;
	int i;

	i = 0;
	result_array = (int*)(malloc(sizeof(int) * (length)));
	while (i < length)
	{
		result_array[i] = f(tab[i]);
		i++;
	}
	return (result_array);
}
