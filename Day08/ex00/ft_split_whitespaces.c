/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:46:07 by tochen            #+#    #+#             */
/*   Updated: 2016/11/04 22:47:25 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ft.h>

int	ft_word_count(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == " " || str[i] == "\t" || str[i] == "\n")
		{
			while (str[i] == " " || str[i] == "\t" || str[i] == "\n")
			{
				i++;
			}
			count++;
		}
		i++;
	}
	return (count);
}

int	wordlen(char *str)
{
	int i;
	int longestword;
	int charactercount;

	i = 0;
	longestword = 0;
	charactercount = 0;
	while (str[i] != '\0')
	{
		charactercount++;
		if (charactercount > longestword)
		{
			longestword = charactercount;
		}
		while (str[i] == " " || str[i] == "\t" || str[i] == "\n")
		{
			charactercount = 0;
			i++;
		}
		i++;
	}
	return (longestword);
}

char **ft_split_whitespaces(char *str)
{
	char	**results_2d_array;
	int		word;
	int		character;

	results_2d_array = (char**)malloc(ft_wordcount(str) * sizeof(char*));
	results_2d_array[0] = (char*)malloc((ft_wordlen(str) + 1) * sizeof(char));
	word = 0;
	character = 0;
	while (*str != '\0')
	{
		if (*str == " " || *str == "\t" || "\n")
		{
			word++;
			results_2d_array[word] = (char*)malloc((ft_wordlen(str) + 1) * sizeof(char));
			while (*str == " " || *str == "\t" || *str == "\n")
				str++;
			character = 0;
		}
		result[word][character] = *str;
		str++;
		character++;
	}
	result[word + 1] = 0;
	return (result);
}
