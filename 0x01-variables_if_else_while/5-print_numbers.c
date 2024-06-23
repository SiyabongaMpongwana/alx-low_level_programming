#include <stdio.h>
/**
 * main - prints out the decimal digits
 */
int main(void)
{
int i = 48;
/**
 * variable holding int value for ASCII digit '0'
 */
while (i <= 57)
{
putchar(i);
++i ; }
/**
 * compares i to 57 - the int value for ASCII '9'
 * prints each digit accordig to i int value
 * prints last digit at 57 and then exits loop
 */
putchar(10);
/**
 * prints new line after the loop has ended
 */
return (0);
}

