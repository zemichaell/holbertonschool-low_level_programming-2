#include <stdio.h>
#include <ctype.h>

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
