#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

/**
* string_toupper - puts to uuper case
* @s: string
* Return: string
*/
char* string_toupper(char *s)
{
char *head = s;
while (*s)
{
if (*s >= 'a' && *s <= 'z')
*s += 'A' - 'a';
s++;
}
return (head);
}
