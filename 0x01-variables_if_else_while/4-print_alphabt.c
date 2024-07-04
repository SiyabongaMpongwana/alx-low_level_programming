#include <stdio.h>
/**
 * main - function prints out lowercase English alphabet except 'q' and 'e'
 *
 * Return: returns zero on success
 */
int main(void)
{
int i = 97;
while (i <= 122)
{
if ((i == 101) ^ (i == 113))
{
++i;
}
else
{
putchar(i);
++i;
}
}
putchar(10);
return (0);
}
