/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ottouti <ottouti@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:55:51 by ottouti           #+#    #+#             */
/*   Updated: 2023/10/27 19:25:40 by ottouti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"
#include <unistd.h>
#include <stdarg.h>

int	print_digit(long n, int base, int upper)
{
	int		count;
	char	*symbols;

	if (n < 0)
	{
		write(1, "-", 1);
		return (print_digit(-n, base, upper) + 1);
	}
	if (upper)
		symbols = "0123456789ABCDEF";
	else
		symbols = "0123456789abcdef";
	if (n < base)
		return (print_char(symbols[n]));
	else
	{
		count = print_digit(n / base, base, upper);
		return (count + print_digit(n % base, base, upper));
	}
}
