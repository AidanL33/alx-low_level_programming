#include <unistd.h>

/**
 * _putchar will write the character c to stdout
 * @c: Is the character to print
 * 
 * Return: On success 1.
 * On error, -1 is returned
 */

int _putchar(char c)
{
  return (write(1, &c, 1));
}
