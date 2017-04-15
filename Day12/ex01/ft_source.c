/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_source.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 16:47:39 by tochen            #+#    #+#             */
/*   Updated: 2016/11/10 16:48:42 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_putchar_error(char c)
{
	write(2, &c, 1);
	return (1);
}

int		ft_putstr_error(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar_error(str[index]);
		index++;
	}
	return (0);
}

int		ft_strcmp(char *s1, char *s2)
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

int		handle_cat(char *str, char *buf, int buf_size)
{
	int fd;
	int ret;

	fd = open(str, O_RDONLY);
	if (fd <= -1)
	{
		error_handling(errno, str);
		return (1);
	}
	while ((ret = read(fd, buf, buf_size)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
	{
		ft_putstr("close() error");
		return (1);
	}
	return (0);
}

void	error_handling(int num, char *str)
{
	write(2, "cat: ", 6);
	ft_putstr_error(str);
	ft_putstr_error(": ");
	if (num == 2)
		write(2, "No such file or directory\n", 27);
	if (num == 20)
		write(2, "Not a directory\n", 16);
	if (num == 13)
		write(2, "Permission denied\n", 19);
}
