/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putdi_fd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joke <joke@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 00:30:00 by joke           #+#    #+#             */
/*   Updated: 2022/11/24 20:29:30 by joke          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/**
 * @brief  
 * Are you a Dementor?
.yawa htaerb ym koot tsuj uoY
*/
int	putdi_fd(int n, int fd)
{
	int				i;
	unsigned int	n1;

	i = 1;
	n1 = n;
	ft_putnbr_fd(n, fd);
	if (n < 0)
	{
		n1 = -n;
		i++;
	}
	else
		n1 = n;
	while (n1 > 9)
	{
		n1 = n1 / 10;
		i++;
	}
	return (i);
}
