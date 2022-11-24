/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joke <joke@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:09:35 by joke           #+#    #+#             */
/*   Updated: 2022/11/24 20:30:02 by joke          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pnt;
	size_t	len;

	len = count * size;
	pnt = malloc(len);
	if (!pnt)
		return (NULL);
	ft_memset(pnt, 0, len);
	return (pnt);
}
