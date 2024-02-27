#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_line - prints lines
* @n: integer
* Return: void
*/
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
putchar('_');
}
putchar('\n');
}
