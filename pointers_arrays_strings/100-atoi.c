#include "main.h"
/**
* _atoi - tranforms a string into a number
* @s: string
* Return: integer
*/

int _atoi(char *s)
{
char c = ' ';
int ret  = 0;
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
ret = -ret;
return (ret);
}
