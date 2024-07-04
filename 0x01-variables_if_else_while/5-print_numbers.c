#include <stdio.h>
/**
 * main - prints out the decimal digits
 *
 * Return: returns a zero (success)
 */
int main(void)
{
int i = 48;
while (i <= 57)
{
putchar(i);
++i;
}
putchar(10);
return (0);
}

