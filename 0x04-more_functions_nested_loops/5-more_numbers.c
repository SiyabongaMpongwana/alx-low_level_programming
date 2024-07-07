#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14 for 10 times with new line
 * Return: void
 */

void more_numbers(void)
{
int i, j;
for (i = 1; i <= 10; i++)
{
for (j = 0; j <= 14; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
