#include "main.h"
/**
* _puts - writes a string
* @str: string
* Return: void
*/
void _puts(char *str)
{
while (*str)
{
_putchar((int)*str);
str++;
}
_putchar('\n');
}
