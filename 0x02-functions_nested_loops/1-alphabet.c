#include "holberton.h"

/**
 * main - function that prints the alphabet, in lowercase
 * You can only use _putchar twice in your code
 * Return: 0.
 */

void print_alphabet(void)
{
        int l = 'a';
        while (l <= 'z')
        {
                _putchar(l);
                l += 1;
        }
        _putchar(10);
        return;
}
