#include <stdio.h>
#include <ctype.h>

/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * You can only use the putchar
 * Return: 0
 */

int main(void)
{
char ch = 'A';
while (ch <= 'Z')
{
putchar(tolower(ch));
ch += 1;
}
putchar('\n');
return (0);
}
