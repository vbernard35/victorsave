/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 09:52:33 by vbernard          #+#    #+#             */
/*   Updated: 2019/09/13 13:36:40 by vbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int j;

	j = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	while (nb >= j)
	{
		if (nb == j)
			return (1);
		if (nb % j == 0)
			return (0);
		j++;
	}
	return (0);
}