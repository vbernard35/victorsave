/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 08:31:23 by vbernard          #+#    #+#             */
/*   Updated: 2019/09/09 15:26:05 by vbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int 	ft_strlen(char *base)
{
	unsigned int l;

	l = 0;
	while (base[l])
		l++;
	return (l);
}

int	ft_base(char *base)
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
			if (base[j] == base[p] || base[j] == '+' || base[j] == '-')
			{
				return (0);
			}
			j++;
		}
		p++;
		j = p + 1;
	}
	return(1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;

	i = base;
	if (nbr < 0)
	{
		nbr = nbr * - 1;
		ft_putchar('-');
	}
	if(!(ft_base(base)))
		return ;
	while (nbr / i > ft_strlen(base))
	{
		i = i * ft_strlen(base);
	}
	while (base >= ft_strlen(base))
	{
		ft_putchar((nbr / ft_strlen(base) + 48);
		nbr = nbr % ft_strlen(base);
		i = i / ft_strlen(base);
	}
}
