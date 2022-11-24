/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putp_fd.c	                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joke <joke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 00:30:00 by joke           #+#    #+#             */
/*   Updated: 2021/11/18 17:35:37 by joke          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/**
 * @brief  
 * Why did Severus Snape stand in the middle of the road?
.no saw eh edis hcihw wonk reven d’uoy oS
*/
int	putp_fd(unsigned long long pnt, int fd)
{
	int		i;
	char	*s;

	s = ull_to_hex(pnt);
	i = puts_fd("0x", fd);
	i += puts_fd(s, fd) - 1;
	free(s);
	return (i);
}
