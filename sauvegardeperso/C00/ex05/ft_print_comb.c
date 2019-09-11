/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 16:48:24 by vbernard          #+#    #+#             */
/*   Updated: 2019/09/06 15:24:30 by vbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_end(void)
{
	char space;
	char comma;

	space = ' ';
	comma = ',';
	write(1, &comma, 1);
	write(1, &space, 1);
}

void	ft_comb(char i, char o, char p)
{
	write(1, &i, 1);
	write(1, &o, 1);
	write(1, &p, 1);
	if (!(i == '7' && o == '8' && p == '9'))
		ft_end();
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_comb(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
