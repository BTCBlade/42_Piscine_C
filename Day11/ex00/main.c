/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 20:00:08 by tochen            #+#    #+#             */
/*   Updated: 2016/11/08 20:16:56 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_putchar(char c);

void	ft_putstr(char *str);

t_list *ft_create_elem(void *data);

t_list *add_link(void *link, void *data)
{
	t_list *tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->data = data;
		tmp->next = link;
	}
	return tmp;
}

void print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->data);
		list = list->next;
	}
}

int		main(int argc, char **argv)
{
	t_list *list;
	t_list *temp;

	temp = ft_create_elem("HelloWorld");

	list = NULL;
	list = add_link(list, temp->data);
	list = add_link(list, "toto\n");
	list = add_link(list, "tata\n");
	list = add_link(list, "tutu\n");

	print_list(list);
	return (0);
}
