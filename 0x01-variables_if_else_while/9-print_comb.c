#include <stdio.h>
/**
 *  main - function
 *  Return: Returns nothing
 */
int main(void)
{
int i = 48;
for (i = 48; i < 57; ++i)
{
if (i == 58)
{
putchar(i);
putchar(44);
putchar(32);
}
else
{
putchar(10);
}
}
return (0);
}
