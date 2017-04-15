/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 22:47:58 by tochen            #+#    #+#             */
/*   Updated: 2016/11/01 23:04:25 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int index;

	index = 0;
	while (index <Z n)
	{
		if(src[index] != '\0')
		{
			dest[index] = src[index];
		}
		else
		{
			dest[index] = '\0';
		}
	}
	return dest;
}
