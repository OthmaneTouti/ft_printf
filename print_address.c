/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ottouti <ottouti@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:46:05 by ottouti           #+#    #+#             */
/*   Updated: 2023/10/27 19:25:24 by ottouti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"
#include <unistd.h>
#include <stdarg.h>

int	print_address(unsigned long address)
{
	int		count;
	char	*symbols;

	symbols = "0123456789abcdef";
	if (address < 16)
		return (write(1, &symbols[address], 1));
	else
	{
		count = print_address(address / 16);
		return (count + print_address(address % 16));
	}
}
