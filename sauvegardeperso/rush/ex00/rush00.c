/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 17:23:30 by vbernard          #+#    #+#             */
/*   Updated: 2019/08/31 22:04:20 by vbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int c;
	int l;

	l = 1;
	c = 1;
	while (l <= y)
	{
		while (c <= x)
		{
			if ((l == 1 && c == 1) || (l == x && c == y) || 
					(l == y && c == 1) || (l == 1 && c == x))
				ft_putchar('o');
			else if (l == 1 || l == y)
				ft_putchar('-');
			else if (c == 1 || c == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			c++;
		}
		l++;
		c = 1;
		ft_putchar('\n');
	}
	if (c <= 0 || l <= 0)
		write(1, "Pas de negatifs merci\n ;-)", 26);
}
