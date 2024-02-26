#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_more_numbers - prints more numbers
* Return: void
*/
void print_more_numbers(void)
{
int i,j;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
_putchar(j+'0');
}
_putchar('\n');
}
}
