/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 13:17:42 by vbernard          #+#    #+#             */
/*   Updated: 2019/09/18 22:41:14 by vbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_calculhexa(char str)
{
	str = (str / 10) * 16;

	return (str);
}

char	ft_putstr_non_printable(char *str)
{
	int i;
	char *tab;
	
	i = 0;
	while (str[i])
	{
		if (str[i] <= 31 || str[i] == 127)
		{
			write (1, ft_calculhexa(str[i]), 1);
			i++;
		}
		write (1, &str[i], 1);
		i++;
	}
}
int main()
{
	char	*str;

	str = "je suis\nla et toi ?\n";
	ft_putstr_non_printable(str);
}

