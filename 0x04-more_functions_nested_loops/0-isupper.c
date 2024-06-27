#include "main.h"

/**
 * _isupper - checks if alphabet is uppercase
 * @c: The character to be checked
 * Return: returns 1 if uppercase otherwise returns 0
 */
int _isupper(int c)
{
if ((c >= 65) && (c <= 90))
{
return (1);
}
else
{
return (0);
}
}
