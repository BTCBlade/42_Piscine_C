/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 12:06:28 by tochen            #+#    #+#             */
/*   Updated: 2016/11/06 10:51:31 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*' && *(s2 + 1) == '*')
	{
		return (match(s1, s2 + 1));
	}
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
	{
		return (0);
	}
	if (*s2 == *s1)
	{
		return  (match(s1 + 1, s2 + 1) || match(s1 + 1, s2));
	}
	if (*s2 == '*')
	{
		return  (match(s1 + 1, s2) || match(s1, s2 + 1));
	}
	return (0);
}
