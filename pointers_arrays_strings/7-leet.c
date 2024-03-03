#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

/**
* leet - letters to numbers
* @s: string
* Return: string
*/
char *leet(char *s) {
const char table[] = {
'a', '4', 'e', '3', 'o', '0', 't', '7', 'l', '1'};
char *head = s;
int i;
while (*s)
{
for (i = 0; i < (int)sizeof(table); i += 2)
{
if (*s == table[i] || *s == table[i] + 'A' - 'a')
{
*s = table[i + 1];
}
}
s++;
}
return (head);
}
