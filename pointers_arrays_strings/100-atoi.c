#include "main.h"
/**
* _atoi - tranforms a string into a number
* @s: string
* Return: integer
*/
int _atoi(char *s)
{
int value = 0;
int neg = 0;
while (*s && *s != '-' && (*s < '0' || *s > '9'))
s++;
if (*s == '-') {
neg = 1;
s++;
}
while (*s >= '0' && *s <= '9')
value = value * 10 + *s++ - '0';
if (neg)
value = -value;
return (value);
}
