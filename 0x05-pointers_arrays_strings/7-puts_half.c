#include "holberton.h"

/**
 * puts_half - function that prints half of a string
 *
 * @str: pointer to char
 * Return: nothing
 */

void puts_half(char *str)
{
	int i = 0;
	int n = 0;

	while (str[i] != '\0')
		i += 1;
	n = i / 2;
	while (str[n] != '\0')
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
