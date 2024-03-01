#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

/**
* reverse_array - puts n array upside-down
* @a: integer array
* @n: integer
* Return: void
*/
void reverse_array(int *a, int n)
{
int *head = a;
int *tail = a + n - 1;
int temp;
while (head < tail)
{
temp = *head;
*head++ = *tail;
*tail-- = temp;
}
}
