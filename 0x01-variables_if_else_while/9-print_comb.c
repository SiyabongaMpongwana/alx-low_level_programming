#include <stdio.h>
/**
 *  main - function
 *
 *  Return: returns 0 if successful
 */
int main(void)
{
int i;

for (i = 48; i <= 57; ++i)
{
putchar(i);
if (i == 57)
{
putchar(10);
}
else
{
putchar(44);
putchar(32);
}
}
return (0);
}
