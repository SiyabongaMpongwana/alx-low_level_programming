#include <stdio.h>
/**
 * main - function prints possible combinations of three digits
 *
 * Return: returns zero always
 */
int main(void)
{
int a = '0';
int b = '0';
int c = '0';

for (a = '0'; a <= '7'; ++a)
{
for(b = '0'; b <= '8'; ++b)
{
for(c = '0'; c <= '9'; ++c)
{
if ((a < b) && (b < c))
{
putchar(a);
putchar(b);
putchar(c);
if ((a != '7') || (c != '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar(10);
return (0);
}
