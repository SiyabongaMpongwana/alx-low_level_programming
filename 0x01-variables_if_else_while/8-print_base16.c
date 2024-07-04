#include <stdio.h>
/**
 * main - characters for hexidecimal numbers
 *
 * Return: returns a zero if successful
 */
int main(void)
{
int i;

for (i = 48; i <= 57; ++i)
{
putchar(i);
}
for (i = 97; i <= 102; ++i)
{
putchar(i);
}
putchar(10);
return (0);
}
