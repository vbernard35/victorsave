/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 13:04:35 by vbernard          #+#    #+#             */
/*   Updated: 2019/09/03 18:41:36 by vbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int l;
	int i;
	int j;

	j = 0;
	i = 0;
	while (j < size)
	{
		while (tab[i] > tab[i+1])
		{
			l = tab[i];
			tab[i] = tab[i+1];
			tab[i+1] = l;
			i++;		
		}
		i = 0;
		j++;
	}
}

#include <stdio.h>

int main ()
{
	int tab[] = {0, 37, 78, 25, 3, 2};
	int i;
	int size;

	i = 0;
	size = 6;
	ft_sort_int_tab(tab, size);
	while(tab[i] > tab[i+1])
	{
		printf ("%d", tab[i]);
		i++;	
	}
}

