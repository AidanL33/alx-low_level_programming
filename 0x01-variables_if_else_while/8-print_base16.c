#include <stdio.h>
#include <unistd.h>

/**
 * main - print base 16 numbers
 *
 * Return: 0
 */

int main(void)
{
char s;
char t = '0';

while (t <= '9')
{
putchar(t);
t++;
}
for (s = 'a'; s <= 'f'; s++)
{
putchar(s);
}
putchar('\n');
return (0);
}
