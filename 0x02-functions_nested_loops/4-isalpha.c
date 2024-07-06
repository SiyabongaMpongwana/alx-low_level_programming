#include "main.h"
/**
 * _isalpha - function  checks if input is an alphabet
 * @c: integer value for input
 *
 * Return: returns 1 if an alphabet otherwise 0
 */
int _isalpha(int c)
{
if (((c >= 65) && (c <= 90)) ^ ((c >= 97) && (c <= 122)))
{
return (1);
}
return (0);
}
