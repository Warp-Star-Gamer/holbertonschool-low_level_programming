#include "main.h"
/**
* puts_half - writes half a string
* @str: string
* Return: void
*/
void puts_half(char *str)
{
int len, draw, skip;
char *tail;

len = 0;
tail = str;
while (*tail)
{
tail++;
len++;
}
draw = len / 2;
skip = len - draw;
str += skip;
while (str < tail)
_putchar(*str++);
_putchar('\n');
}
