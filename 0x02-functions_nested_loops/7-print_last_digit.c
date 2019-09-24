#include "holberton.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @x: The input number to check
 * Return: int.
 */

int print_last_digit(int x)
{

	if (x < 0)
	{
		x = x * (-1);
	}
	x %= 10;
	_putchar(x + '0');

	return (x);
}
