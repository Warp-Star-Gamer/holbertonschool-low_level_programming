#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_diagonal - prints diagonals
* @n: integer
* Return: void
*/
void print_diagonal(int n)
{
int i, j;
int w = 0;
if (n == 0)
_putchar('\n');
for (i = 0; i < n; i++)
{
for (j = 0; j <= w; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
w++;
}
}
