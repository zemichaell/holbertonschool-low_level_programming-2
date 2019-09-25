#include "holberton.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: nothing.
 */

void times_table(void)
{
	int row, col;
	int mult = 0;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			mult = (row * col);
			if (mult >= 0 && mult < 10)
			{
				_putchar(mult + '0');
				if (col != 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
				}
			}
			else if (mult > 9 && mult < 82)
			{
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
				if (col != 9)
				{
					_putchar(',');
					_putchar(32);
				}
			}
		}
		_putchar(10);
	}
}
