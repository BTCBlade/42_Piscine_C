/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srcs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 23:23:53 by tochen            #+#    #+#             */
/*   Updated: 2016/11/12 23:26:37 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strcpy(char *dst, char *src)
{
	char	*tmp;

	tmp = dst;
	while (*src)
	{
		*dst = *src;
		src++;
		dst++;
	}
	*dst = '\0';
	return (tmp);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}
int		ft_putchar_error(char c)
{
	write(2, &c, 1);
	return (1);
}
void	ft_putstr_error(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar_error(str[index]);
		index++;
	}
}

int		ft_atoi(char *str)
{
	int index;
	int results;
	int setToNegativeOne;

	results = 0;
	index = 0;
	setToNegativeOne = 1;
	while (str[index] == 32)
		index++;
	if (str[index] == 45)
	{
		setToNegativeOne = -1;
		index++;
	}
	if (str[index] == 43)
	{
		index++;
	}
	while (str[index] != '\0' && str[index] >= 48 && str[index] <= 57)
	{
			results = results * 10 + str[index] - '0';
			index++;
	}
	return (results * setToNegativeOne);
}

// char	**items_to_arr(char *str)
// {
// 	char	**result;
// 	int		i;
// 	int		j;
// 	char	temp[32];
//
// 	i = 0;
// 	result = (char**)malloc(25000);
// 	while (str[i] != '\0')
// 	{
// 		j = 0;
// 		if (str[i] == ' ')
// 		{
// 		}
// 		else
// 		{
// 			while (str[i + j] != ' ' || str[i + j] != '\0' || str[i + j] != '(' || str[i + j] != ')')
// 			{
// 				temp[j] = str[i + j];
// 				j++;
// 			}
// 			*result = temp;
// 			result++;
// 		}
// 		i++;
// 	}
// 	return (result);
// }
int		valid_char_count(char *str)
{
	int result;
	int i;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (((str[i] >= 48 && str[i] <= 57) || str[i] == 43 || str[i] == 45 ||
			str[i] == 47 || str[i] == 42 || str[i] == 37 || str[i] == 40 || str[i] == 41))
		{
			result++;
		}
		i++;
	}
	return (result);
}

char	*de_space(char *str)
{
	int i;
	int j;
	char *results;

	i = 0;
	j = 0;
	results = malloc(valid_char_count(str) + 1);
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			continue;
		}
		else
		{
			results[j] = str[i];
			j++;
		}
		i++;
	}
	return (results);
}

//
// char *rpn(char *str)
// {
// 	int i;
//
//
// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		if (str[i] >= 48 )
// 	}
// }

t_list *ft_create_elem(void *data)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	new->data = data;
	new->next = NULL;

	return (new);
}
