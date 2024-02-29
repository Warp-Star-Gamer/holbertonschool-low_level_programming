/**
* _puts - writes a string
* @str: string
* Return: void
*/
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
