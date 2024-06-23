#include <stdio.h>
/**
 * main - characters for hexidecimal numbers
 *
 */
int main(void)
{
int i = 48;
/**
 * integer value for ASCII zero '0'
 */
while (i <= 57)
/**
 * 57 is ASCII for '9' the last hexidecimal number
 */
{
putchar(i);
++i; }
/**
 * prints corresponding ASCII value for i
 * increments i
 * prints last character at 57 then exits
 */
i = 97;
/**
 * new value corresponding to ASCII character 'a'
 */
while (i <= 102)
/**
 * 102 is ASCII for 'f' the last hexideciaml letter
 */
{
putchar(i);
++i; }
/**
 * prints hexidecimal letter for every value of i
 * increments i until it is equal to 102
 * prints hexidecimal letter for 102 then exits loop
 */
putchar(10);
/**
 * prints new line after the loop has printed every hexcidecimal
 */
return (0);
/**
 * returns a zero for success
 */
}
