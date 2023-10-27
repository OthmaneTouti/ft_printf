#include "libft/libft.h"
#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int count;
	int count_check;

	//TEST 1
	const char *test1a = NULL;
	const char *test1b = "Potato%es";
	printf("My printf:\n");
	count = ft_printf("Hello %s\nHello again %s\n", test1a, test1b);
	printf("Test printf:\n");
	count_check = printf("Hello %s\nHello again %s\n", test1a, test1b);
	if (count == count_check)
		printf("\033[0;32mTest 1 passed!\n\33[0m");
	else
		printf("\033[0;31mTest 1 Failed!\n\33[0m");
	printf("Count: %d\nCount Check: %d\n", count, count_check);
	printf("--------------------------------------\n");

	//TEST 2
	printf("My printf:\n");
	count = ft_printf("%c %c %c\n", '0', 0, '0');
	printf("Test printf:\n");
	count_check = printf("%c %c %c\n", '0', 0, '0');
	if (count == count_check)
		printf("\033[0;32mTest 2 passed!\n\33[0m");
	else
		printf("\033[0;31mTest 2 Failed!\n\33[0m");
	printf("Count: %d\nCount Check: %d\n", count, count_check);
	printf("--------------------------------------\n");
	return (0);
}