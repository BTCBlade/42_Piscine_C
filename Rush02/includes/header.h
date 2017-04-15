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

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_putnbr_nl(int nb);
int		ft_putchar_error(char c);
void 	ft_putstr_error(char *str);
int		ft_atoi(char *str);
char	*ft_strcpy(char *dst, char *src);
char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);

#endif
