/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 08:31:23 by vbernard          #+#    #+#             */
/*   Updated: 2019/09/07 11:58:02 by vbernard         ###   ########.fr       */
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
	int l;

	l = 0;
	while (base[l])
		l++;
	return (l);
}

void	ft_base(char *base)
{
	int p;
	
	p = 0;
	if (base[0] == '\0' || base[1] == '\0' || base[i] == '+' || base[i] == '-'
			|| )


int	ft_putnbr_base(int nbr, char *base)
{
	int i;

	i = 1;
	if (nbr < 0)
	{
		nbr = nbr * - 1;
		ft_putchar('-');
	}
	ft_base(base)
	while (nbr / i > 9)
		i = i * 10;
	while (i)
	{
		ft_putchar((nbr /i) + '0');
		nbr = nbr % i;
		i = i / ft_strlen(base);
	}
	return (i);
}

int main()
{
	int nbr;
	char base[] = "hugo";
	
	nbr = 0;
	printf("%d", ft_putnbr_base(nbr, base));
}
