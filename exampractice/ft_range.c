/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 12:35:10 by tochen            #+#    #+#             */
/*   Updated: 2016/11/17 13:01:39 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int start, int end)
{
	int *result_arr;
	int i;

	i = 0;
	result_arr = malloc(sizeof(int) * (end - start + 1));
	while ( i < (end - start + 1))
	{
		result_arr[i] = (start + i);
		i++;
	}
	return (result_arr);
}

int		main(void)
{
	printf("%d\n", ft_range(3, 6)[0]);
	printf("%d\n", ft_range(3, 6)[1]);
	printf("%d\n", ft_range(3, 6)[2]);
	printf("%d\n", ft_range(3, 6)[3]);
	printf("%lu\n", sizeof(ft_range(3, 6)));
}
