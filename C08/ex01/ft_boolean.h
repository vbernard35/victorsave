/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 10:46:03 by vbernard          #+#    #+#             */
/*   Updated: 2019/09/17 14:00:40 by vbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
# define TRUE 0
# define FALSE 1

typedef int	t_bool;
# define SUCCESS 0
# define EVEN_MSG  "I have an even number of arguments.\n"
# define ODD_MSG  "I have an odd number of arguments.\n"
# define EVEN(nbr) nbr % 2 == 0
#endif
