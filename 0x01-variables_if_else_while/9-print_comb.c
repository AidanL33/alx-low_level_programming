#include <stdio.h>
#include <unistd.h>

/**
 * main - prints all possible combinations
 * of single-digit numbers
 * Return: 0
 */

int main(void)
{
int x;

for (x = '0'; x <= '9'; x++)
{
putchar(x);

if (x != '9')
{
putchar(',');
putchar(' ');
}
}

putchar('\n');
return (0);
}