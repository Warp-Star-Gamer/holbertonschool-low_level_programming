#include "main.h"
/**
* _atoi - tranforms a string into a number
* @s: string
* Return: integer
*/
int isnumber(char c)
{
if (c >= '0' && c <= '9')
return 1;
return 0;
}

int _atoi(char* s)
{
char c = ' ';
int value = 0;
int neg = 0;
while (*s)
{
c = *s;
if (c == '-' && isnumber(s[1]))
break;
if (isnumber(c))
break;
s++;
}
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
