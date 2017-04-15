/************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 14:43:37 by tochen            #+#    #+#             */
/*   Updated: 2016/11/02 18:14:51 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int index;
	int results;

	results = 0;
	index = 0;
	while (s1[index] != '\0')
	{
		if (s1[index] != s2[index])
		{
			results = s1[index] - s2[index];
			break;
		}
		index++;
	}
	return (results);
}

int	main(void)
{
	char *str1 = "Xello";
	char *str2 = "Hello";
	char *str3 = "HYello";
	char *str4 = "Hello World";
	char *str5 = "Hello world";

	printf("%d\n", ft_strcmp(str1, str2));
	printf("%d\n", strcmp(str1, str2));

	printf("%d\n", ft_strcmp(str2, str3));
	printf("%d\n", strcmp(str2, str3));

	printf("%d\n", ft_strcmp(str1, str3));
	printf("%d\n", strcmp(str1, str3));

	printf("%d\n", ft_strcmp(str4, str5));
	printf("%d\n", strcmp(str4, str5));

}
