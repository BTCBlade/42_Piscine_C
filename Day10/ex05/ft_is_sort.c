/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 10:22:09 by tochen            #+#    #+#             */
/*   Updated: 2016/11/08 10:35:28 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int countpos;
	int countneg;

	i = 0;
	countpos = 0;
	countneg = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
		{
			countpos++;
		}
		if (f(tab[i], tab[i + 1]) <= 0)
		{
			countneg++;
		}
		i++;
	}
	if (countpos == (length - 1) || countneg == (length - 1))
	{
		return (1);
	}
	return (0);
}
