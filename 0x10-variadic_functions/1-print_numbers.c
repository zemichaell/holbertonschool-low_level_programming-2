#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of parameters
 * Return: Sum of all parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator != 0 || n != 0)
	{
		va_list arguments;
		unsigned int i;
		int aux = 0;

		va_start(arguments, n);
		for (i = 0; i < n; i++)
		{
			aux = va_arg(arguments, int);
			if (i == n - 1)
				printf("%d", aux);
			else
				printf("%d%s", aux, separator);
		}
		printf("\n");
		va_end(arguments);
	}
}
