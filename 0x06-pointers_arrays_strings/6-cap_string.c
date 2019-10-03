#include "holberton.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @ch: Pointer to Char
 * Return: char.
 */

char *cap_string(char *ch)
{
	int i = 0;

	while (*(ch + i) != '\0')
	{
		if (i == 0)
			*(ch + i) = *(ch + i) - ' ';
		if (*(s + i) == ' ' || *(s + i) == '\n' || s[i - 1] == '\t'
		     || s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '!'
		     || s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '('
		     || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}'
		     i - 1] == '.'))
	        {
		if (*(ch + i) >= 97 && *(ch + i) <= 122)
		{
			*(ch + i) = *(ch + i) - ' ';
			i++;
		}
	}
	return (ch);
}
