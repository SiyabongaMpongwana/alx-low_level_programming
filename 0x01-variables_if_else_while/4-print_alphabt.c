#include <stdio.h>
/**
 *main - function prints out lowercase English alphabet except 'q' and 'e'
 */
int main(void)
{
int i = 97;
/**
 * i initialied to 97 because integer value for lowercase 'a' in ASCII
 */
while (i <= 122)
{
/**
 * the 122 is ASCII 'z' in integer value
 * i is being compared against it
 */
if ((i == 101) ^ (i == 113))
++i;
/**
 * 101 is 'e' and 113 is 'q' in ASCII
 * so since we don't want to print out these values
 * the program will skip them this is done by incrementing i
 * when whenever i hits these values
 */
putchar(i);
++i;
}
/**
 * the loop terminates once it reaches 122 - ASCII 'z'
 */
putchar(10);
/**
 * prints a new line after the loop
 */
return (0);
/**
 * returns a zero when successful
 */
}

