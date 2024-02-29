/**
* rev_string - reverses a string
* @s: string
* Return: void
*/
void rev_string(char* s)
{
char c;
char *head = s;
char *tail = s;
while (*tail)
tail++;
tail--;
while (tail > head)
{
char hd = *head;
char tl = *tail;
*tail = hd;
*head = tl;
tail--;
head++;
}
}
