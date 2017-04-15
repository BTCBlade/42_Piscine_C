/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 13:03:35 by tochen            #+#    #+#             */
/*   Updated: 2016/11/12 13:04:02 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# define BUF_SIZE 1

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_putchar_error(char c);
void	ft_putstr_error(char *str);
void	ft_putnbr(int nb);
char	*ft_strcpy(char *dst, char *src);
char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);
int		ft_str_to_newline_len(char *str);
int		grid_valid(char **argv, char obstacle, char empty, int height);
void	grid_print(char **grid);
int		grid_height(char **grid);
int		grid_width(char **grid);
char	**grid_create(char **argv);
char	**grid_readstr_to_2d(char *str, int height);

#endif
