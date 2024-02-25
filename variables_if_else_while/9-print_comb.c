#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Description: Assigns a random number to variable n and prints its last digit
* Return: Always 0 (Success)
*/
int main(void)
{
char digit;
for (digit = '0'; digit <= '9'; digit += 1)
{
putchar(digit);
if (digit != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
