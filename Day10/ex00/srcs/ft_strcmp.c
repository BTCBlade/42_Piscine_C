/* ************************************************************************** */
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
			break ;
		}
		index++;
	}
	return (results);
}
