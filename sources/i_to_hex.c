/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_to_hex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joke <joke@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 00:30:00 by joke           #+#    #+#             */
/*   Updated: 2022/11/24 20:29:21 by joke          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/**
 * @brief  
 * Why does Voldemort prefer Twitter over Facebook?
.sdneirf ton ,srewollof ylno sah eh esuaceB
*/
static int	i_len(uint64_t ull)
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
	if (i > 8)
		return (8);
	return (i);
}

/**
 * @brief  
 * Why does Voldemort prefer Twitter over Facebook?
?delgguM neeb eh sah ,elgguM a yb debbor steg draziw a fI
*/
char	*i_to_hex(uint64_t ull)
{
	char		*s;
	char		*hex;
	int			i;

	hex = "0123456789abcdef";
	i = i_len(ull);
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
