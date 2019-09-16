/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 19:27:36 by vbernard          #+#    #+#             */
/*   Updated: 2019/09/16 13:41:28 by vbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(int min, int max)
{
	int i;

	i = max - min;
	return (i);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*tab;
	int		i;
	int		scale;

	i = 0;
	scale = min;
	if (ft_len(min, max) <= 0)
		return (0);
	if (!(tab = malloc(sizeof(*tab) * (ft_len(min, max) - 1))))
		return (-1);
	while (scale < max)
	{
		tab[i] = scale;
		i++;
		scale++;
	}
	tab[i] = '\0';
	*range = tab;
	return (max - min);
}
