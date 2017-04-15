/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:55:09 by tochen            #+#    #+#             */
/*   Updated: 2016/11/09 17:07:17 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

t_list *ft_create_elem(void *data)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	if (new)
	{
		new->data = data;
		new->next = NULL;
	}
	return (new);
}


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
void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *temp;

	temp = *begin_list;
	if (!temp)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	while (temp->next)
	{
		temp= temp->next;
	}
	temp->next = ft_create_elem(data);
}

int		ft_list_size(t_list *begin_list)
{
	int count;

	count = 1;
	if (begin_list)
	{
		while (begin_list->next != NULL)
		{
			begin_list = begin_list->next;
			count++;
		}
	}
	return (count);
}


int		main(int argc, char **argv)
{
	t_list *list;
	t_list *temp;
	t_list *tempend;

	temp = ft_create_elem("HelloWorld");
	tempend = ft_create_elem("HiAgainWorld");


	list = NULL;
	ft_list_push_back(&list, "HiHiHi111\n");
	ft_list_push_back(&list, "HiHiHi2222\n");
	ft_list_push_back(&list, "HiHiHi3333\n");
	printf("%d\n", ft_list_size(list));

	print_list(list);
	return (0);
}
