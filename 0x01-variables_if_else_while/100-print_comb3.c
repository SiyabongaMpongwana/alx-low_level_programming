#include <stdio.h>
/**
 * main - function prints all possible combinations two digits
 * Return: returns void
 */
int main(void)
{
int a = 48;
int b = 49;
for (a = 48; a <= 57; ++a)
{
for (b = 49; b <= 57; ++b)
{
if ((a < b) ^ (a <= 8))
{
putchar(a);
putchar(b);
if ((a == 56) && (b == 57))
{
putchar(10);
}
else
{
putchar(44);
putchar(32);
}
}
}
}
return (0);
}
