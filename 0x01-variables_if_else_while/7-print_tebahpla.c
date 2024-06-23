#include <stdio.h>
/**
 * main - prints the English alphabet backwards and in lowercase
 * starting with 'z' ending with 'a'
 */
int main(void)
{
int i = 122;
/**
 * i initialized for the corresponding ASCII letter 'z'
 */
while (i >= 97)
/**
 * 97 is the integer value for lowercase ASCII 'a'
 */
{
putchar(i);
--i;  }
/**
 * while i not 97 print each ASCII character corresponding to i
 * and decrement until i equals 97 print ASCII for 97 and then
 * exit loop
 */
putchar(10);
/**
 * prints new line after loop is terminated
 */
return (0);
}
