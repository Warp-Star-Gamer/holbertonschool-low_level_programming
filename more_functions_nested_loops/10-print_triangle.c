#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_triangle - prints triangle
* @size: integer
* Return: void
*/

int _atoi(char *s)
{
char c = ' ';
unsigned int ret = 0;
int neg = 0;
if (!s)
return (0);
while (1)
{
c = *s;
if (c == 0)
break;
else if (c == '-')
neg ^= 1;
else if (c >= '0' && c <= '9')
break;
s++;
}
while (c >= '0' && c <= '9')
{
ret *= 10;
ret += c - '0';
s++;
c = *s;
}
if (ret != 0 && neg)
return (-ret);
return (ret);    
}
