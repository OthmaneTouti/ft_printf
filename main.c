#include "libft/libft.h"
#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int count;
	const char *test = "Hakuna Matata";
	count = ft_printf("Hello %s\nHello again %s\n", test, test);
	printf("%d\n", count);
	return (0);
}