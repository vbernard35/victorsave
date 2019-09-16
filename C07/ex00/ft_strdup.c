/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 12:21:21 by vbernard          #+#    #+#             */
/*   Updated: 2019/09/16 12:15:16 by vbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*tab;
	int		i;

	i = 0;
	tab = malloc(sizeof(*tab) * (ft_strlen(src) + 1));
	while (src[i])
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
