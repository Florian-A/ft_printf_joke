/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putx1_fd.c 	                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joke <joke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:09:35 by joke           #+#    #+#             */
/*   Updated: 2021/11/16 13:43:12 by joke          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/**
 * @brief  
 * What did the comedian say to Harry Potter?
“Why so Sirius?”
*/
int	putx1_fd(int n, int fd)
{
	char		*hex;
	int			i;

	hex = i_to_hex(n);
	if (!hex)
		return (0);
	i = puts_fd(hex, fd);
	free(hex);
	return (i);
}
