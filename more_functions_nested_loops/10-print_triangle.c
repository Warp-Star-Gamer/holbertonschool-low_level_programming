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
unsigned char* us = (unsigned char*)s;
unsigned char c = ' ';
unsigned int ret  = 0;
int neg = 0;
if (!s)
return (0);
while (1)
{
c = *us;
if (c == 0)
break;
else if (c == '-')
neg ^= 1;
else if (c >= '0' && c <= '9')
break;
us++;
}
while (c >= '0' && c <= '9')
{
ret *= (unsigned int)10;
unsigned char value = (unsigned char)(c - '0');
ret += value;
us++;
c = *us;
}
if (neg)
return (-ret);
return (ret);    
}
