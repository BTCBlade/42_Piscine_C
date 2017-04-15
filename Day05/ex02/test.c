/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 15:08:47 by tochen            #+#    #+#             */
/*   Updated: 2016/11/01 15:09:03 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char cat[] = "+512c3";
	char *catPoint;
	catPoint = cat[0];

	char test1;
	test1 = '4';

	printf("%d\n", test1);

	printf("%d\n", catPoint - '0');

	printf("%d\n", atoi(cat));

	write(1, &catPoint, 1);

	return (0);
}
