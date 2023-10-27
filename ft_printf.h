/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ottouti <ottouti@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:15:26 by ottouti           #+#    #+#             */
/*   Updated: 2023/10/27 19:29:34 by ottouti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	print_char(int c);
int	find_format(char specifier, va_list ap);
int	print_string(const char *str);
int	print_digit(long n, int base, int upper);
int	print_address(unsigned long address);

#endif