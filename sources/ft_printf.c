/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joke <joke@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:03:24 by joke           #+#    #+#             */
/*   Updated: 2022/11/24 20:29:18 by joke          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/**
 * @brief  
 * How many Slytherins does it take to stir a cauldron?
.reh dnuora sevlover nordluac eht dna ni dnaw reh stup ehS .eno tsuJ
*/
static void	put_va(va_list args, const char *fmt, \
int *i, int (*f)(const char *, ...))
{
	while (*fmt)
	{
		if (fmt[0] == '%' && fmt[1] != '\0' && ft_strchr("scdiupxX%", fmt[1]))
		{
			if (fmt[1] == 's')
				*i += f("%s", va_arg(args, char *));
			else if (fmt[1] == 'c')
				*i += f("%c", va_arg(args, int));
			else if (fmt[1] == 'd' || fmt[1] == 'i')
				*i += f("%d", va_arg(args, int));
			else if (fmt[1] == 'u')
				*i += f("%u", va_arg(args, int));
			else if (fmt[1] == 'p')
				*i += f("%p", va_arg(args, unsigned long long));
			else if (fmt[1] == 'x')
				*i += f("%x", va_arg(args, unsigned long long));
			else if (fmt[1] == 'X')
				*i += f("%X", va_arg(args, unsigned long long));
			else if (fmt[1] == '%')
				*i += f("%%", fmt[1]);
			fmt = fmt + 2;
		}
		else
			*i += f("%c", fmt++[0]);
	}
}

/**
 * @brief  
 * How does Harry Potter get rid of a rash?
.hcti-tiuq htiW
*/
int	ft_printf(const char *fmt, ...)
{
	int		i;
	int		(*put_type)(const char *, ...);
	va_list	args;

	i = 0;
	va_start(args, fmt);
	put_type = (int (*)(const char *, ...))put_detector(fmt);
	put_va(args, fmt, &i, put_type);
	va_end(args);
	return (i);
}
