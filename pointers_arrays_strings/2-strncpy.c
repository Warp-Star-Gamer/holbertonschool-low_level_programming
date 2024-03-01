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
