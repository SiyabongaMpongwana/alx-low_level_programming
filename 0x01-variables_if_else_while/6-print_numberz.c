#include <stdio.h>
/**
 * main - prints out the 10 decimal digits
 */
int main(void)
{
int i = 48;
/**
 * integer value for ASCII number '0'
 */
while (i <= 57)
{
putchar(i);
++i;
}
/**
 * while i less than or eqaul to 57 - ASCII digit '9'
 * print ASCII value for each i
 * then increment i
 */
putchar(10);
/**
 * prints new line right after the loop has terminated
 */
return (0);
}
