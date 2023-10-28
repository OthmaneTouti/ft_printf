#include "libft/libft.h"
#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int count;
	int count_check;

	// //TEST 1
	// const char *test1a = NULL;
	// const char *test1b = "Potato%es";
	// printf("My printf:\t");
	// count = ft_printf("Hello %s\nHello again %s\n", test1a, test1b);
	// printf("Test printf:\t");
	// count_check = printf("Hello %s\nHello again %s\n", test1a, test1b);
	// if (count == count_check)
	// 	printf("\033[0;32mTest 1 passed!\n\33[0m");
	// else
	// 	printf("\033[0;31mTest 1 Failed!\n\33[0m");
	// printf("Count: %d\tCount Check: %d\n", count, count_check);
	// printf("--------------------------------------\n");

	// //TEST 2
	// printf("My printf:\t");
	// count = ft_printf("%c %c %c\n", '0', 0, '1');
	// printf("Test printf:\t");
	// count_check = printf("%c %c %c\n", '0', 0, '1');
	// if (count == count_check)
	// 	printf("\033[0;32mTest 2 passed!\n\33[0m");
	// else
	// 	printf("\033[0;31mTest 2 Failed!\n\33[0m");
	// printf("Count: %d\tCount Check: %d\n", count, count_check);
	// printf("--------------------------------------\n");

	// //TEST 3
	// printf("My printf:\t");
	// count = ft_printf("%d\n", 42);
	// printf("Test printf:\t");
	// count_check = printf("%d\n", 42);
	// if (count == count_check)
	// 	printf("\033[0;32mTest 3 passed!\n\33[0m");
	// else
	// 	printf("\033[0;31mTest 3 Failed!\n\33[0m");
	// printf("Count: %d\tCount Check: %d\n", count, count_check);
	// printf("--------------------------------------\n");

	// //TEST 4
	// printf("My printf:\t");
	// count = ft_printf("%x\n", 42);
	// printf("Test printf:\t");
	// count_check = printf("%x\n", 42);
	// if (count == count_check)
	// 	printf("\033[0;32mTest 4 passed!\n\33[0m");
	// else
	// 	printf("\033[0;31mTest 4 Failed!\n\33[0m");
	// printf("Count: %d\tCount Check: %d\n", count, count_check);
	// printf("--------------------------------------\n");

	// //TEST 5
	// printf("My printf:\t");
	// count = ft_printf("%X\n", 42);
	// printf("Test printf:\t");
	// count_check = printf("%X\n", 42);
	// if (count == count_check)
	// 	printf("\033[0;32mTest 5 passed!\n\33[0m");
	// else
	// 	printf("\033[0;31mTest 5 Failed!\n\33[0m");
	// printf("Count: %d\tCount Check: %d\n", count, count_check);
	// printf("--------------------------------------\n");

	// //TEST 6
	// printf("My printf:\t");
	// count = ft_printf("%i\n", 42);
	// printf("Test printf:\t");
	// count_check = printf("%i\n", 42);
	// if (count == count_check)
	// 	printf("\033[0;32mTest 6 passed!\n\33[0m");
	// else
	// 	printf("\033[0;31mTest 6 Failed!\n\33[0m");
	// printf("Count: %d\tCount Check: %d\n", count, count_check);
	// printf("--------------------------------------\n");

	// //TEST 7
	// printf("My printf:\t");
	// count = ft_printf("%d\n", -42);
	// printf("Test printf:\t");
	// count_check = printf("%d\n", -42);
	// if (count == count_check)
	// 	printf("\033[0;32mTest 7 passed!\n\33[0m");
	// else
	// 	printf("\033[0;31mTest 7 Failed!\n\33[0m");
	// printf("Count: %d\tCount Check: %d\n", count, count_check);
	// printf("--------------------------------------\n");

	// //TEST 8
	// printf("My printf:\t");
	// count = ft_printf("%X\n", -42);
	// printf("Test printf:\t");
	// count_check = printf("%X\n", -42);
	// if (count == count_check)
	// 	printf("\033[0;32mTest 8 passed!\n\33[0m");
	// else
	// 	printf("\033[0;31mTest 8 Failed!\n\33[0m");
	// printf("Count: %d\tCount Check: %d\n", count, count_check);
	// printf("--------------------------------------\n");

	// //TEST 9
	// printf("My printf:\t");
	// count = ft_printf("%u\n", 42);
	// printf("Test printf:\t");
	// count_check = printf("%u\n", 42);
	// if (count == count_check)
	// 	printf("\033[0;32mTest 9 passed!\n\33[0m");
	// else
	// 	printf("\033[0;31mTest 9 Failed!\n\33[0m");
	// printf("Count: %d\tCount Check: %d\n", count, count_check);
	// printf("--------------------------------------\n");

	// //TEST 10
	// printf("My printf:\t");
	// count = ft_printf("%u\n", -42);
	// printf("Test printf:\t");
	// count_check = printf("%u\n", -42);
	// if (count == count_check)
	// 	printf("\033[0;32mTest 10 passed!\n\33[0m");
	// else
	// 	printf("\033[0;31mTest 10 Failed!\n\33[0m");
	// printf("Count: %d\tCount Check: %d\n", count, count_check);
	// printf("--------------------------------------\n");

	// //TEST 11
	// printf("My printf:\t");
	// count = ft_printf("%p\n", "");
	// printf("Test printf:\t");
	// count_check = printf("%p\n", "");
	// if (count == count_check)
	// 	printf("\033[0;32mTest 11 passed!\n\33[0m");
	// else
	// 	printf("\033[0;31mTest 11 Failed!\n\33[0m");
	// printf("Count: %d\tCount Check: %d\n", count, count_check);
	// printf("--------------------------------------\n");

	// //TEST 12
	// printf("My printf:\t");
	// count = ft_printf("%p\n", (void *)42);
	// printf("Test printf:\t");
	// count_check = printf("%p\n", (void *)42);
	// if (count == count_check)
	// 	printf("\033[0;32mTest 12 passed!\n\33[0m");
	// else
	// 	printf("\033[0;31mTest 12 Failed!\n\33[0m");
	// printf("Count: %d\tCount Check: %d\n", count, count_check);
	// printf("--------------------------------------\n");
	// return (0);

	//TEST 13
	printf("My printf:\t");
	count = ft_printf("\001\002\007\v\010\f\r\n");
	printf("Test printf:\t");
	count_check = printf("\001\002\007\v\010\f\r\n");
	if (count == count_check)
		printf("\033[0;32m 13.OK \33[0m");
	else
	{
		printf("\033[0;31m 13.KO \33[0m");
		printf("\tCount: %d\tCount Check: %d\n", count, count_check);
	}
	//TEST14
	count = ft_printf("%%%d%X%i\n", INT_MIN, INT_MAX, -INT_MAX, NULL);
	count_check = printf("%%%d%X%i\n", INT_MIN, INT_MAX, -INT_MAX, NULL);
	if (count == count_check)
		printf("\033[0;32m 14.OK \33[0m");
	else
	{
		printf("\033[0;31m 14.KO \33[0m");
		printf("\tCount: %d\tCount Check: %d\n", count, count_check);
	}
	//TEST15
	count = ft_printf("%d\n", NULL);
	count_check = printf("%d\n", NULL);
	if (count == count_check)
		printf("\033[0;32m 14.OK \33[0m");
	else
	{
		printf("\033[0;31m 15.KO \33[0m");
		printf("\tCount: %d\tCount Check: %d\n", count, count_check);
	}
}