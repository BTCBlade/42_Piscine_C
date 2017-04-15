/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 12:27:32 by tochen            #+#    #+#             */
/*   Updated: 2016/10/29 10:02:25 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void		ft_ft(int *nbr)
{
	printf("%d\n", *nbr);
	*nbr = 42;
	printf("%d", *nbr);

}

int		main(void)
{
	int *testptr ;
	int varA;
	
	varA = 5;

	testptr = &varA;

	ft_ft(testptr);
	return (0);
}
