/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 17:43:35 by tochen            #+#    #+#             */
/*   Updated: 2016/10/30 17:43:37 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int  ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

int		rush(int a, int b)
{
	int trackerY;

	trackerY = 1;

	if (trackerY == 1)
  {
    ft_makeHeadOrTail(a);
    trackerY++;
  }
  while (trackerY > 1 && trackerY < b)
  {
    ft_makeMiddle(a);
    trackerY++;
  }
  if (trackerY == b)
  {
    ft_makeHeadOrTail(a);
  }
  return (0);
}

int   ft_makeHeadOrTail(int a)
{
  int end;
  int index;

  index = 1;
  end = a;

  if (a == 1)
  {
    ft_putchar('o');
    ft_putchar('\n');
    return (0);
  }

  while (index < end)
  {
    if (index == 1)
    {
      ft_putchar('o');
      index++;
    }
    while (index > 1 && index < a)
    {
      ft_putchar('-');
      index++;
    }
    if (index == end)
    {
      ft_putchar('o');
      ft_putchar('\n');
    }
  }
  return (0);
}

int ft_makeMiddle(int a)
{
  int end;
  int index;

  index = 1;
  end = a;

  if (a == 1)
  {
    ft_putchar('|');
    ft_putchar('\n');
    return (0);
  }

  while (index < end)
  {
    if (index == 1)
    {
      ft_putchar('|');
      index++;
    }
    while (index > 1 && index < a)
    {
      ft_putchar(' ');
      index++;
    }
    if (index == end)
    {
      ft_putchar('|');
      ft_putchar('\n');
    }
  }
  return (0);
}

int main(void)
{
  //ft_makeHeadOrTail(2);
  //ft_makeMiddle(2);
  //rush(5,1);
  rush(4,4);

  return (0);
}
