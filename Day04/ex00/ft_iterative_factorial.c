/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 01:53:07 by tochen            #+#    #+#             */
/*   Updated: 2016/10/29 01:53:27 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int     ft_iterative_factorial(int nb)
{
    int results;

    results = 1;

    if(nb > 2147483647)
    {
      return 0;
    }

    while(nb > 0)
    {
      results = results * nb;
      nb--;
    }

    printf("%d",results);
    return results;

}

int		main(void)
{

		ft_iterative_factorial(5);
}
