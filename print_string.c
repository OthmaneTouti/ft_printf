/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ottouti <ottouti@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:44:45 by ottouti           #+#    #+#             */
/*   Updated: 2023/10/26 19:46:54 by ottouti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int print_string(const char * str)
{
	int count;

	count = 0;
	if (!str)
		return (0);
	while (*str)
		count += write(1, str, 1);
	return (count);
}
