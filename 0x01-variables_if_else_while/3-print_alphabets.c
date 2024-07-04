#include <stdio.h>
/**
 * main - prints English alphabet
 * Return: returns nothing
 */
int main(void)
{
int i = 97;
/**
 * Description: variable holding int value of ASCII character
 * initialized to 97 - the int value for lowercase ASCII character 'a'
 */
while (i <= 122)
{
putchar(i);
++i;
}
/**
 * checks variable i against 122(the last lowercase character of alphabet)
 * prints each character corresponding to changing i value
 * loop terminates when i equals 122 - the int value for lowercase 'z' in ascii
 */
i = 65; /* i initialized to 65 */
/**
 * new value for i - is ASCII for uppercase 'A'
 */
while (i <= 90)
{
putchar(i);
++i;
}
/**
 * i compared against 90 - uppercase 'Z' in ASCII
 * prints out ASCII character corresponding to value of i
 * increments i until i equals 90 then loop terminates
 * after printing ASCII character for 90
 */
putchar(10);
/**
 * prints newline after the loop has terminated
 */
return (0);
/**
 * return value: is void
 */
}
