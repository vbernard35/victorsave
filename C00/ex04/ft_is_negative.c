/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 16:12:31 by vbernard          #+#    #+#             */
/*   Updated: 2019/09/06 15:14:06 by vbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char a;
	char b;

	a = 'N';
	b = 'P';
	if (n >= 0)
	{
		write(1, &b, 1);
	}
	else
	{
		write(1, &a, 1);
	}
}
