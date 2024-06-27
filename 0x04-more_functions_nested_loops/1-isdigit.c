#include "main.h"
/**
 * _isdigit - checks if input is a digit
 * @c: character
 * Return: returns 1 if digit otherwise 0
 */
int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
{
return (1);
}
else
{
return (0);
}
}
