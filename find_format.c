/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_format.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ottouti <ottouti@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:37:35 by ottouti           #+#    #+#             */
/*   Updated: 2023/10/27 19:23:40 by ottouti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"
#include <unistd.h>
#include <stdarg.h>

int	find_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count = print_char(va_arg(ap, int));
	else if (specifier == 's')
		count += print_string(va_arg(ap, const char *));
	else if (specifier == 'p')
	{
		count = write(1, "0x", 2);
		count += print_address(va_arg(ap, unsigned long));
	}
	else if (specifier == 'd' || specifier == 'i')
		count = print_digit((long)va_arg(ap, int), 10, 0);
	else if (specifier == 'u')
		count = print_digit((unsigned int)va_arg(ap, int), 10, 0);
	else if (specifier == 'x')
		count = print_digit((long)va_arg(ap, unsigned int), 16, 0);
	else if (specifier == 'X')
		count = print_digit((long)va_arg(ap, unsigned int), 16, 1);
	else if (specifier == '%')
		count = write(1, "%", 1);
	else
		count = write(1, &specifier, 1);
	return (count);
}
