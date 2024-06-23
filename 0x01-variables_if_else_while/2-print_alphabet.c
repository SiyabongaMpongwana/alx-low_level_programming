#include <stdio.h>
/*
 * function converts int values to ascii
 * and prints out the the corrensponding ascii character
 * in this case it is the English alphabet in lowercase
 */
int main(void)
{
int lowerAlpha = 97; /* ascii value for the first lowercase alphabet */

while (lowerAlpha <= 122)
{
printf("%c", lowerAlpha);
++lowerAlpha;     }
putchar(10);
return (0);
}

