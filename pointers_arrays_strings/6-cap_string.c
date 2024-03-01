/**
* cap_string - capitalizes a string
* @s: string
* Return: string
*/
char* cap_string(char* s)
{
const char separators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
char *head = s;
char can_cap = 0;
int i;
while (1)
{
char c = *s;
if (c == 0)
break;
if (c >= 'a' && c <= 'z')
{
if (can_cap)
{
c += 'A' - 'a';
*s = c;
}
}
can_cap = 0;
for (i = 0; i < sizeof(separators); i++)
{
if (separators[i] == c)
{
can_cap = 1;
break;
}
}
s++;
}
return (head);
}
