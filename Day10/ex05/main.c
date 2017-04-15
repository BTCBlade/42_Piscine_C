/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 10:36:18 by tochen            #+#    #+#             */
/*   Updated: 2016/11/09 14:47:43 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int));

int		num_equality(int a, int b)
{
	if (a > b)
		return (-1);
	if (b > a)
		return (1);
	return (0);
}

int		main(void)
{
	int arr1[] = {1};

	printf("%d\n", ft_is_sort(arr1, 5, &num_equality));
	return (0);
}
