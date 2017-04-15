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

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct 		s_list
{
	struct s_list 	*next;
	void 			*data;
} 					t_list;

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_putchar_error(char c);
void 	ft_putstr_error(char *str);
int		ft_atoi(char *str);
char	*de_space(char *str);
char	**items_to_arr(char *str);
int		valid_char_count(char *str);
char	*space_operators(char *str);
char	*rpn(char *str);
t_list 	*ft_create_elem(void *data);



#endif
