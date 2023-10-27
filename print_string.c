/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ottouti <ottouti@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:44:45 by ottouti           #+#    #+#             */
/*   Updated: 2023/10/26 20:13:21 by ottouti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"
#include <unistd.h>
#include <stdarg.h>

int print_string(const char *str)
{
	int count;
	char *null_str;

	count = 0;
	null_str = "(null)";
	if (!str)
	{
		while (*null_str)
		{
			count += write(1, null_str, 1);
			null_str++;
		}
		return (count);
	}
	while (*str)
	{
		count += write(1, str, 1);
		str++;
	}
	return (count);
}
