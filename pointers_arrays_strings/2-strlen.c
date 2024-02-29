/**
* _strlen - returns the length of a string
* @s: string
* Return: integer
*/
int _strlen(char *s)
{
int len = 0;
while (*s)
{
s++;
len++;
}
return (len);
}
