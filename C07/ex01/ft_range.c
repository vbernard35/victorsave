/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 18:20:31 by vbernard          #+#    #+#             */
/*   Updated: 2019/09/15 16:03:42 by vbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_len(int min, int max)
{
	int i;

	i = max - min;
	return (i);
}

int		*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	scale;

	i = 0;
	scale = min;
	if (ft_len(min, max) <= 0)
		return (NULL);
	if (!(tab = malloc(sizeof(*tab) * (ft_len(min, max) - 1))))
		return (NULL);
	while (scale < max)
	{
		tab[i] = scale;
		i++;
		scale++;
	}
	tab[i] = '\0';
	return (tab);
}
