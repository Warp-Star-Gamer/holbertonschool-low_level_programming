#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

/**
* _strcmp - compares strings
* @s1: string
* @s2: string
* Return: integer
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2++)
if (*s1++ == '\0')
return (0);
return (*(unsigned char *)s1 - *(unsigned char *)(s2 - 1));
}
