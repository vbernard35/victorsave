/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:35:53 by vbernard          #+#    #+#             */
/*   Updated: 2019/09/11 15:48:59 by vbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int j;

	j = 3;
	if (nb <= 1)
		return (2);
	if (nb == 2)
		return (2);
	if (nb == 3)
		return (3);
	while (nb >= j)
	{
		if (nb == j)
			return (nb);
		if (nb % j == 0)
			return (ft_next_prime(nb));
		j++;
	}
	return (ft_next_prime(nb));
}

int	ft_next_prime(int nb)
{
	int i;
	int j;

	j = 3;
	i = nb;
	while (i != j)
	{
		if (i % j == 0)
		{
			i++;
			j = 3;
		}
		j++;
	}
	return (i);
}
