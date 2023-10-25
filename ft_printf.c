/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ottouti <ottouti@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:09:46 by ottouti           #+#    #+#             */
/*   Updated: 2023/10/25 17:23:57 by ottouti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libftprintf.h"
#include <stdio.h>

void	test(void)
{
	const char *s = "This compiles!";
	int	len = ft_strlen(s);
	printf("This compiles!\n%d\n", len);
}

