/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 10:27:21 by vbernard          #+#    #+#             */
/*   Updated: 2019/09/06 13:51:19 by vbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *base)
{
	int len;

	len = 0;
	while (base[len] != '\0')
	{
		if (base[len])  
		len++;
	}
}

int	ft_atoi_base(char *str, char *base)
{
	int i;
	int k;
	int nb;
	
	i = 0;
	k = 1;
	nb = 1;
	while (str[i] == "\n" || str[i] == "\t" || str[i] == "\r" || str[i] == "\v"
			|| str[i] == "\f")
		i++;
	while (str[i] == '+' || str[i] =='-')
	{
		if (str[i] == '-')
		{
			k = k * - 1;
		}
		i++;
	}
	while (str[i] >=48 && str[i] <= 57)
	{
		nb = nb * ft_strlen(base) + str[i + 48];
	}
	i++;
}
