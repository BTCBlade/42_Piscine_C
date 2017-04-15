/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:29:58 by tochen            #+#    #+#             */
/*   Updated: 2016/11/09 12:10:59 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		*ft_map(int *tab, int length, int (*f)(int));

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		add_three(int num)
{
	return (num + 3);
}

int		main(void)
{
	int testarr[] = {1,2,3,4,5,6,7,8,9,15};
	printf("%d\n", (ft_map(testarr, 3, &add_three)[2]));

}
