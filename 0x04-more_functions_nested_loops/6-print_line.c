#include "main.h"
/**
 * print_line - draws straight line in the terminal
 * @n: Number of repetitions
 *
 * Return: Void
 */

void print_line(int n)
{
int a;

for (a = 0; a < n; a++)
{
_putchar('_');
}
_putchar('\n');
}
