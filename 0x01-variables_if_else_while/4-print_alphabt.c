#include <stdio.h>
#include <unistd.h>

/**
 * main - print out alphabet except q and e.
 *
 * Return: 0
 */

int main(void)
{
int lo;

for (lo = 'a'; lo <= 'z'; lo++)
{
if (lo != 'e' && lo != 'q')
{
putchar(lo);
}
else
{
}
}
putchar('\n');
return (0);
}
