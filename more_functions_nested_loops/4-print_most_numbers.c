#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_numbers - prints numbers
* Return: void
*/
void print_numbers(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
if (c != '2' && c != '4')
putchar(c);
}
putchar('\n');
}