/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_format.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ottouti <ottouti@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:37:35 by ottouti           #+#    #+#             */
/*   Updated: 2023/10/26 20:11:02 by ottouti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int	find_format(char specifier, va_list ap)
{
	int count;

	count = 0;
	if (specifier == 'c')
		count = print_char(va_arg(ap, int));
	else if (specifier == 's')
	 	count = print_string(va_arg(ap, const char *));
	// else if (specifier =='p')
	// 	count = print_void(va_arg(ap, void *));
	// else if (specifier == 'd' || specifier == 'i')
	// 	count = print_int(va_arg(ap, int));
	// else if (specifier == 'x')
	// 	count = print_hexa_low(va_arg(ap, int));
	// else if (specifier == 'X')
	// 	count = print_hexa_upp(va_arg(ap, int));
	else if (specifier == '%')
	 	count = write(1, "%", 1);
	else
		count = write(1, &specifier, 1);
	return (count);
}
