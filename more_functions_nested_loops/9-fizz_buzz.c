#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - prints square
* Return: integer
*/

int main(void)
{
int i, i3, i5;
for (i = 1; i <= 100; i++)
{
i3 = i % 3;
i5 = i % 5;
if (i3 != 0 && i5 != 0)
printf("%d", i);
if (i3 == 0)
printf("Fizz");
if (i5 == 0)
printf("Buzz");
if (i < 100)
printf(" ");
}
printf("\n");
return (0);
}
