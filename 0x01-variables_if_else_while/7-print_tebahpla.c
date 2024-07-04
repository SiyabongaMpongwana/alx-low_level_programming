#include <stdio.h>
/**
 * main - prints the English alphabet backwards and in lowercase
 *
 * Return: returns a zero if successful
 */
int main(void)
{
int i = 122;

while (i >= 97)
{
putchar(i);
--i;
}
putchar(10);
return (0);
}
