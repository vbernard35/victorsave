/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:35:53 by vbernard          #+#    #+#             */
/*   Updated: 2019/09/13 13:36:20 by vbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_prime(int nb)
{
	int j;

	j = 2;
	if (nb <= 1)
		return (0);
	while (j <= (nb / j))
	{
		if (nb % j == 0)
			return (0);
		j++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (ft_prime(nb))
			return (nb);
		nb++;
	}
}
