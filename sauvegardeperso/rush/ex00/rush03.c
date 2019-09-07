/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 17:23:30 by vbernard          #+#    #+#             */
/*   Updated: 2019/08/31 23:10:10 by vbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int l;
	int c;

	l = 1;
	c = 1;
	while (l <= y)
	{
		while (c <= x)
		{
			if ((c == 1 && l == 1) || (l == x  && c == 1))
				ft_putchar('A');
			else if ((l == x && c == y) || (l == 1 && c == y))
				ft_putchar('C');
			else if (c == 1 || l == x || c == y || l == 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		l++;
		c = 1;
		ft_putchar('\n');
	}
	if (x <= 0 || y <= 0)
		write(1, "Pas de negatifs merci\n ;-)", 26);
}
