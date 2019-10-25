#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: string to be printed between numbers
 * @n: number of parameters
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	if (separator != 0 || n != 0)
	{
		va_list arguments;
		unsigned int i;
		char *aux;

		va_start(arguments, n);
		for (i = 0; i < n; i++, aux++)
		{
			aux = va_arg(arguments, char*);
			if (aux == NULL)
				printf("nil");
			if (i == n - 1)
				printf("%s", aux);
			else
				printf("%s%s", aux, separator);
		}
		printf("\n");
		va_end(arguments);
	}
}
