#include "main.h"
/**
* print_array - dumps n characters from an array
* @a: array of integers
* @n count
* Return: void
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", *a++);
if (i < n - 1)
printf(", ");
}
_putchar('\n');
}
