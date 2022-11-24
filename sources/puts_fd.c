/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puts_fd.c 		                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joke <joke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:09:35 by joke           #+#    #+#             */
/*   Updated: 2021/11/16 13:43:19 by joke          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/**
 * @brief  
 * What do you call a postal carrier who can speak to packages?
A parcel tongue.
*/
int	puts_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
	{
		i += puts_fd("(null)", fd);
		return (i);
	}
	while (s[i])
		i += putc_fd(s[i], fd);
	return (i);
}
