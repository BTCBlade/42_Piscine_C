/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashevtso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 16:41:08 by ashevtso          #+#    #+#             */
/*   Updated: 2016/11/13 13:39:25 by ashevtso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(void)
{
	int		ret;
	char	buf[BUF_SIZE + 1];
	char	*tmp;
	char	*cs;

	cs = malloc(1);
	*cs = '\0';
	while ((ret = read(0, buf, BUF_SIZE)) > 0)
	{
		tmp = malloc(ft_strlen(cs) + 2);
		ft_strcpy(tmp, cs);
		tmp[ft_strlen(cs)] = buf[0];
		tmp[ft_strlen(cs) + 1] = '\0';
		if (cs)
			free(cs);
		cs = malloc(ft_strlen(tmp));
		ft_strcpy(cs, tmp);
	}
	if (!process_input(cs))
	{
		ft_putstr_error("Aucune");
	}
	ft_putstr("\n");
	return (0);
}
