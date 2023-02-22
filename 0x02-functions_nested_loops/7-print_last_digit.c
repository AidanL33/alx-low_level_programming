#include "main.h"

/**
 * print_last_digit - will print the last digit of a number
 * @n: n is an integer
 * Description: print last digit
 * Return: int
 */

int print_last_digit(int n)
{
int ldigit = n % 10;

if (n < 0)
{
ldigit = ldigit * -1;
}
_putchar(ldigit + '0');
return (ldigit);
}
