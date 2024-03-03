#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

/**
* _strncat - concatenates strings
* @dest: string
* @src: string
* @n: integer
* Return: string
*/
char *_strncat(char *dest, char *src, int n)
{
char *dst_end = dest;
char *new_dest;
char *write;
int written_count = 0;
while (*dst_end)
dst_end++;
new_dest = dest;
if (new_dest)
{
write = new_dest;
while (*dest)
*write++ = *dest++;
while (*src && (written_count < n))
{
*write++ = *src++;
written_count++;
}
*write = 0;
}
return (new_dest);
}
