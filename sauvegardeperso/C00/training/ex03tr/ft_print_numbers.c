/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 15:22:22 by vbernard          #+#    #+#             */
/*   Updated: 2019/08/30 15:33:19 by vbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int c;

	c = '9';

	while (c >= '0')
	{
		write(1, &c, 1);
		c--;
	}
}

int main()
{
	ft_print_numbers();
}