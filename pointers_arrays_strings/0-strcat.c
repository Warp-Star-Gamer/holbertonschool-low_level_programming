/**
* _strcat - concatenates strings
* @dest: string
* @src: string
* Return: string
*/
char* _strcat(char* dest, char* src)
{
char *src_end = src;
char *dst_end = dest;
char *new_dest;
char *write;
while (*src_end)
src_end++;
while(*dst_end)
dst_end++;
new_dest = (char*)malloc((src_end - src) + (dst_end - dest) + 1);
if(new_dest)
{
write = new_dest;
while(*dest)
*write++ = *dest++;
while(*src)
*write++ = *src++;
*write = 0;
}
return (new_dest);
}