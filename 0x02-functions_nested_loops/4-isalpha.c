#include "main.h"

/**
 *_isalpha - Checks for alphabetic character
 * @c: is the character to be checked
 * Return: 1 alphabetic character or 0 for anything else
 */

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
