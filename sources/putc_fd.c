/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putc_fd.c		                                    :+:      :+:    :+:   */
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
 * Do you like Harry Potter?
!uoy erodelbmuD-a I esuaceB
*/
int	putc_fd(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}
