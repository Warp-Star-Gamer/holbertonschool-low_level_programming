#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

/**
* _strncpy - concatenates strings
* @dest: string
* @src: string
* @n: integer
* Return: string
*/
char *_strncpy(char *dest, char *src, int n)
{
char* d;
char *s;
char t;
if (n != 0)
{
d = dest;
s = src;
do {
t = *d;
*d++ = *s++;
if (t == 0)
{
while (--n != 0)
*d++ = 0;
break;
}
} while (--n != 0);
}
return (dest);
}
