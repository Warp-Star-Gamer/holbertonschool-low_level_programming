#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_triangle - prints triangle
* @size: integer
* Return: void
*/

void print_triangle(int size)
{
int i, j;
int w = size - 1;
for (i = 0; i < size; i++)
{
for (j = 0; j < w; j++)
_putchar(' ');
for (j = w; j < size; j++)
_putchar('#');
if (i < size - 1)
_putchar('\n');
w--;
}
_putchar('\n');
}
