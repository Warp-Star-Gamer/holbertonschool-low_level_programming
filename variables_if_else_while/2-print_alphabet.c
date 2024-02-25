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
char letter;
for (letter = 'a'; letter <= 'z'; letter += 1)
{
	putchar(letter);
}
putchar('\n');
return (0);
}
