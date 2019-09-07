/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 15:46:03 by vbernard          #+#    #+#             */
/*   Updated: 2019/09/06 15:59:39 by vbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main (int argc, char **argv)
{
	(void) argc;
	(void) argv;

	printf("%d\n", argc);
	printf("%s\n", argv[1]);
	return (0);
}
