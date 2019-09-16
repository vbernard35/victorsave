/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 22:43:52 by vbernard          #+#    #+#             */
/*   Updated: 2019/09/15 10:46:21 by vbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_lenstrs(int size, char **strs)
{
	int i;
	int l;

	i = 0;
	while (i < size)
	{
		l = ft_len(strs[i]);
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str, char **strs, char *sep, int size)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		while (strs[i][j])
		{
			str[k++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			str[k++] = sep[j++];
		}
		j = 0;
		i++;
	}
	str[k] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		longtot;
	char	*str;

	if (size == 0)
		return (NULL);
	longtot = ft_lenstrs(size, strs);
	str = malloc(sizeof(str) * (longtot + (size - 1) * ft_len(sep)) + 1);
	if (str == NULL)
		return (0);
	else
		return (ft_strdup(str, strs, sep, size));
}
