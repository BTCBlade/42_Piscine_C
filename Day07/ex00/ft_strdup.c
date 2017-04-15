/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:43:31 by tochen            #+#    #+#             */
/*   Updated: 2016/11/03 12:00:56 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

char	*ft_strdup(char *src)
{
	char *copy;
	int len;
	int size;

	size = sizeof(*src);
	len = ft_strlen(src);
	if (!src)
	{
		return (0);
	}
	copy = (char*)malloc(size *(len + 1));
	ft_strcpy(copy, src);
	return copy;
}

int		main(void)
{
	char str1[] = "Hello World";
	//char str2[] = "Hi";

	printf("%d\n", &str1);
	printf("%d\n", &strdup(str1));
	//printf("%s\n", );
	return (0);

}
