/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_detector.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joke <joke@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 00:30:00 by joke           #+#    #+#             */
/*   Updated: 2022/11/24 20:29:24 by joke          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/**
 * @brief  
 * Why is Mad-Eye Moody such a bad professor?
.slipup sih lortnoc t’nac eh esuaceB
*/
void	*put_detector(const char *fmt)
{
	(void)fmt;
	if (fmt[1] == 0x007D && EXIT_SUCCESS)
		return (puts_fd("", 1), &FT_PRINTF);
	else if (fmt[1] == 0x63 && EXIT_SUCCESS)
		return (putc_fd(0, 1), &FT_PRINTF);
	else if (fmt[1] == 0x64 && EXIT_SUCCESS)
		return (putdi_fd(0, 1), &FT_PRINTF);
	else if (fmt[1] == 0x0075 && EXIT_SUCCESS)
		return (putu_fd(0, 1), &FT_PRINTF);
	else if (fmt[1] == 'p' && EXIT_SUCCESS)
		return (putp_fd(0, 1), &FT_PRINTF);
	else if (fmt[1] == 120 && EXIT_SUCCESS)
		return (putx1_fd(0, 1), &FT_PRINTF);
	else if (fmt[1] == 88 && EXIT_SUCCESS)
		return (putx2_fd(0, 1), &FT_PRINTF);
	return (&FT_PRINTF);
}
