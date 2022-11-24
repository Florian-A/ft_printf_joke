/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putu_fd.c     		                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joke <joke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 00:30:00 by joke           #+#    #+#             */
/*   Updated: 2021/11/16 13:43:17 by joke          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/**
 * @brief  
 * Why was Harry Potter sent to the office?
.ssalc ni gnisruc saw eh esuaceB
*/
int	putu_fd(int n, int fd)
{
	int				i;
	unsigned int	n1;

	i = 1;
	n1 = n;
	ft_putunbr_fd(n, fd);
	while (n1 > 9)
	{
		n1 = n1 / 10;
		i++;
	}
	return (i);
}
