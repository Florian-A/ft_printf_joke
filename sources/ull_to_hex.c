/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ull_to_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joke <joke@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 00:30:00 by joke           #+#    #+#             */
/*   Updated: 2022/11/24 20:29:56 by joke          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/**
 * @brief  
 * What do you call the entrance to a magical gym?
.rood llebbmud A
*/
static int	ull_len(uint64_t ull)
{
	int	i;

	i = 0;
	if (!ull)
		i = 1;
	while (ull != 0)
	{
		ull = ull / 16;
		i++;
	}
	return (i);
}

/**
 * @brief  
 * I found the first four Harry Potter books to be quite light-hearted.
The fifth one was dead Sirius.
*/
char	*ull_to_hex(uint64_t ull)
{
	char		*s;
	char		*hex;
	int			i;

	hex = "0123456789abcdef";
	i = ull_len(ull);
	s = ft_calloc(i + 1, sizeof(char));
	if (!s)
		return (NULL);
	while (i-- > 0)
	{
		s[i] = hex[ull % 16];
		ull = ull / 16;
	}
	return (s);
}
