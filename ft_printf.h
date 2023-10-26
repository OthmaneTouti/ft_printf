/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ottouti <ottouti@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:15:26 by ottouti           #+#    #+#             */
/*   Updated: 2023/10/26 19:47:59 by ottouti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTPRINTF_H
# define FTPRINTF_H

#include <stdarg.h>

int	ft_printf(const char *format, ...);
int print_char(int c);
int	find_format(char specifier, va_list ap);
int print_string(const char * str);

#endif