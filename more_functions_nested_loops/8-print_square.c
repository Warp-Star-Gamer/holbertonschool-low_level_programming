#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_square - prints square
* @size: integer
* Return: void
*/

void print_square(int size)
{
int x, y;
for (y = 0; y < size; y++)
{
for (x = 0; x < size; x++)
{
_putchar('#');
}
_putchar('\n');
}
}
