#include <stdio.h>
#include <unistd.h>

/**
 * main - print lowercase alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
int m;

for (m = 'z'; m >= 'a'; m--)
{
putchar(m);
}
putchar('\n');
return (0);
}

