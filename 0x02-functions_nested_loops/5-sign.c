#include "main.h"
/**
 *  print_sign - function prints sign of  number
 *  @n: integer variable
 *
 *  Return: returns 1 if positive  -1 if negative otherwise 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
