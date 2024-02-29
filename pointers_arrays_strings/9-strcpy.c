#include "main.h"
/**
* _strcpy - copies a string to another
* @dest: string
* @src: string
* Return: string
*/
char *_strcpy(char *dest, char *src)
{
char *cpy = dest;
while (*src)
*cpy++ = *src++;
*cpy = 0;
return (dest);
}
