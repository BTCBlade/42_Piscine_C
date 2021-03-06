/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:16:09 by tochen            #+#    #+#             */
/*   Updated: 2016/11/09 14:42:03 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_count_if(char **tab, int (*f)(char*));

int		is_alphabet(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 96 || str[i] >= 123)
		{
			return (0);
		}
		i++;
	}
	return (1);
}


int		main(void)
{
	char *c_arr[4] = {"AJKDAF", "ALKFJ", "asdf"};

	printf("%d\n", ft_count_if(c_arr, &is_alphabet));
	return (0);
}
