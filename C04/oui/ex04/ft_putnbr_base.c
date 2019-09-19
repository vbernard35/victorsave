/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 08:31:23 by vbernard          #+#    #+#             */
/*   Updated: 2019/09/18 22:36:24 by vbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *base)
{
	int l;

	l = 0;
	while (base[l])
		l++;
	return (l);
}

int		ft_base(char *base)
{
	int p;
	int j;

	j = 1;
	p = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[p])
	{
		while (base[j])
		{
			if (base[j] == base[p] || base[j] == '+' || base[j] == '-'
				|| base[j] == 32)
			{
				return (0);
			}
			j++;
		}
		p++;
		j = p + 1;
	}
	return (1);
}

void	ft_calcul(int nbr, char *base, int longbase)
{
	int i;

	i = 1;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		ft_putchar('-');
	}
	while (nbr / i >= longbase)
		i = i * longbase;
	while (i >= 1)
	{
		ft_putchar(base[nbr / i]);
		nbr = nbr % i;
		i = i / longbase;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int longbase;

	longbase = ft_strlen(base);
	if (!(ft_base(base) == 0))
		ft_calcul(nbr, base, longbase);
}
