#include "main.h"
/**
 * _islower - function checks if input is a lowercase alphabet
 * @c: integer variable taken in by function
 *
 * Return: returns 1 if input is lowercase otherwise 0
 */
int _islower(int c)
{
if ((c >= 97) && (c <= 122))
{
return (1);
}
return (0);
}
