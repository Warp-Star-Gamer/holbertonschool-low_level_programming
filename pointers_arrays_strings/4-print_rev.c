#include "main.h"
/**
* print_rev - writes a string in reverse
* @s: xstring
* Return: void
*/
void print_rev(char *s)
{
char *cur = s;
while (*cur)
cur++;
cur--;
while (cur >= s)
{
_putchar(*cur);
cur--;
}
_putchar('\n');
}
