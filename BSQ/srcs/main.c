/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 16:05:34 by tochen            #+#    #+#             */
/*   Updated: 2016/11/15 16:19:29 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

// int		main(int argc, char **argv)
// {
// 	int		i;
// 	int		ret;
// 	int		fd;
// 	char	buf[BUF_SIZE + 1];
// 	char	*tmp;
// 	char	*cs;
//
// 	i = 1;
// 	if (argc == 1)
// 	{
// 		cs = malloc(1);
// 		if (!cs)
// 			return (0);
// 		*cs = '\0';
// 		while ((ret = read(0, buf, BUF_SIZE)) > 0)
// 		{
// 			tmp = malloc(ft_strlen(cs) + BUF_SIZE + 1);
// 			if (!tmp)
// 				return (0);
// 			ft_strcpy(tmp, cs);
// 			if (cs)
// 				free(cs);
// 			cs = malloc(ft_strlen(tmp));
// 			cs = ft_strcat(tmp, buf);
// 		}
// 	}
// 	cs = malloc(1);
// 	if (!cs)
// 		return (0);
// 	*cs = '\0';
// 	while (argv[i])
// 	{
// 		fd = open(argv[i], O_RDONLY);
// 		if (fd == -1)
// 		{
// 			write(2, "open() error\n", 13);
// 		}
// 		while ((ret = read(fd, buf, BUF_SIZE)))
// 		{
// 			tmp = malloc(ft_strlen(cs) + BUF_SIZE + 1);
// 			if (!tmp)
// 				return (0);
// 			ft_strcpy(tmp, cs);
// 			if (cs)
// 				free(cs);
// 			cs = malloc(ft_strlen(tmp));
// 			cs = ft_strcat(tmp, buf);
// 		}
// 		if (close(fd) == -1)
// 		{
// 			ft_putstr("close() error");
// 			return (1);
// 		}
// 		i++;
// 	}
// }
