#include "holberton.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: Pointer to Char
 * Return: char.
 */

char *rot13(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
		{
			s[i] = (s[i] + 13);
		}
		else
			while ((s[i] >= 'n' && s[i] <= 'z') ||
			       (s[i] >= 'N' && s[i] <= 'Z'))
			{
				s[i] = (s[i] - 13);
			}
		i++;
	}
	return (s);
}
