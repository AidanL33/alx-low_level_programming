#include "main.h"

/**
 * more_numbers - print num 0 - 14
 *
 * Return: void
 */

void more_numbers(void)
{
char n, i;
int m = 0;

while (m < 10)
{
for (n = 0; n <= 14; n++)
{
i = n;
if (n > 9)
{
_putchar('1');
i = n % 10;
}
_putchar('0' + i);
}
_putchar('\n');
m++;
}
}
