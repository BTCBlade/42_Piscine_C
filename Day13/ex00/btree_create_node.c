/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 22:37:13 by tochen            #+#    #+#             */
/*   Updated: 2016/11/11 22:48:47 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

s_btree		*btree_create_node(void *item)
{
	s_btree *new;

	new = malloc(sizeof(t_btree));
	new->item = item;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
