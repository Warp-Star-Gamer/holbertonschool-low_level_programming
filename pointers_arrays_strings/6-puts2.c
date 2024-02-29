#include "main.h"
/**
* puts2 - writes a string
* @str: string
* Return: void
*/
void puts2(char *str)
{
while (*str)
{
_putchar(*str);
str++;
if (*str == 0)
break;
str++;
}
_putchar('\n');
}
