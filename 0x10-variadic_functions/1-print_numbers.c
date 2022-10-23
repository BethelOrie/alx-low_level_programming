#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 *print_numbers - check the code for Holberton School students.
 *@n: number of arguments
 *@separator: character separator of numbers
 *Return: Always 0.
 *@...: a variable number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

		for (index = 0; index < n; index++)
		{
			printf("%s%d", separator, va_arg(list, int));

			if (index != (n - 1) && separator != NULL)
				printf("%s", separator);
		}

	printf("\n");
}
