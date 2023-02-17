#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print alphabet in lowercase and uppercase
 *
 * Return: 0
 */

int main(void)
{
char al;

for (al = 'a'; al <= 'z'; al++)
{
putchar(al);
}

for (al = 'A'; al <= 'Z'; al++)
{
putchar(al);
}
putchar('\n');
return (0);
}
