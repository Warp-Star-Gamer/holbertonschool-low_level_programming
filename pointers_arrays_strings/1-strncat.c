/**
* _strncat - concatenates strings
* @dest: string
* @src: string
* @n: integer
* Return: string
*/
char* _strncat(char* dest, char* src, int n)
{
char *dst_end = dest;
char *new_dest;
char *write;
int written_count = 0;
while (*dst_end)
dst_end++;
new_dest = (char*)malloc(n + (dst_end - dest) + 1);
if (new_dest)
{
write = new_dest;
while(*dest)
*write++ = *dest++;
while(*src && (written_count < n))
{
*write++ = *src++;
written_count++;
}
*write = 0;
}
return (new_dest);
}

// EXERCICE 2
/**
* _strncat - concatenates strings
* @dest: string
* @src: string
* @n: integer
* Return: string
*/
char* _strncpy(char* dest, char* src, int n)
{
if (n != 0)
{
char *d = dest;
char *s = src;
do
{
if ((*d++ = *s++) == 0)
{
while(--n != 0)
*d++ = 0;
break;
}
} while(--n != 0);
}
return (dest);
}
